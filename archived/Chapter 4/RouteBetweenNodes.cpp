/*
# 4.1 - Route Between Nodes
#### Mitchell Ciupak
#### 20210114

## Problem
Given a directed graph, design an algorithm to find out whether there is a
route between two nodes.
Page: (109,120)


## Clarifying Questions
* Is it a fully connected graph? => Yes
* Will the start and finish nodes be identified? => Yes

## List of Solutions vs. Tradeoffs
* DFS - O(V+E) using stack (Chosen bc it is more universal)
* BFS - O(V+E) using queue
* Bidirectional Search - No good for directed graph with given start

## Pseudocode

bool isRouteBetweenNodes(Node start, Node end){
    if start is null then return false;

    if isEnd(start) then return true;
    start.visited = true;

    for each node in root.adjacent {
        if node.visited is false {
            if isEnd(node) then return true;
            node.visited = true;
        }
    }
    return false;
}

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