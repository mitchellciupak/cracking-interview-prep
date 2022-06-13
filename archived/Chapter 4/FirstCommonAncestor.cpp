/*
# 4.8 - First Common Ancestor
#### Mitchell Ciupak
#### 20210124


## Problem
Design an algorithm and write code to find the first common ancestor
of two nodes in a binary tree. Avoid storing additional nodes in a data structure.
NOTE: This is not necessarily a binary search tree.
Page: (110,121)

## Clarifying Questions
* Is graph directed? Probably not, but here it is

## List of Solutions vs. Tradeoffs

## Pseudocode
* Find two nodes
* Trace up till parents match


*/

//Implementation
#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int src, dest;
};

class Graph
{
public:
    // construct a vector of vectors to represent an adjacency list
    vector<vector<int>> adjList;

    // Graph Constructor
    Graph(vector<Edge> const& edges, int N)
    {
        // resize the vector to N elements of type vector<int>
        adjList.resize(N);

        // add edges to the directed graph
        for (auto& edge : edges)
        {
            // insert at the end
            adjList[edge.src].push_back(edge.dest);

            // Uncomment below line for undirected graph
            // adjList[edge.dest].push_back(edge.src);
        }
    }
};

void printGraph(Graph const& graph, int N)
{
    for (int i = 0; i < N; i++)
    {
        // print current vertex number
        cout << i << " --> ";

        // print all neighboring vertices of vertex i
        for (int v : graph.adjList[i])
            cout << v << " ";
        cout << endl;
    }
}

bool isRouteBetweenNodes(Graph const& graph, int N, int start, int end){
    if (start > N - 1) return false;

    if (start == end) return true;

    for (int v : graph.adjList[start]) {
        if (v == end) return true;
    }

    return false;
}


//Testing
int main()
{
    vector<Edge> edges =
    {
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
        { 3, 2 }, { 4, 5 }, { 5, 4 }
    };

    // Number of nodes in the graph
    int N = 6;

    // construct graph
    Graph graph(edges, N);

    // print adjacency list representation of graph
    printGraph(graph, N);
    cout << "\n";

    // Testing
    cout << "7->1? " << isRouteBetweenNodes(graph, N, 7, 1) << "\n";
    cout << "1->1? " << isRouteBetweenNodes(graph, N, 1, 1) << "\n";
    cout << "2->1? " << isRouteBetweenNodes(graph, N, 7, 1) << "\n";

    return 0;
}