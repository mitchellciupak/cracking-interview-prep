// 1.2 Arrays and Stirngs - Check Permutations 
// Mitchell Ciupak
// 20201104

/*
Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.
Page(90,101)

Note: Permutation - is true of parent sring has the same number of character counts as child
*/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPermutation(char * parent, char * child) {

    //Check lengths of string
    unsigned int plen = strlen(parent);
    unsigned int clen = strlen(child);

    if(plen != clen){
        return false;
    }

    //Create hash map (assuming only 26 lowercase letters)
    int * letters = calloc(sizeof(int),26);

    //Populate hash map w/ parent occurances
    for(int i = 0; i < plen; i++){
        letters[(int)parent[i] - 48]++;
    }

    //Check hash map w/ child
    for(i = 0; i < clen; i++){
        unsigned int index = (int)child[i] - 48;
        
        letters[index]--;

        if(letters[index] < 0){
            return false;
        }
    }

    free(letters);
    return true;

}




void main(){

    char parent[] = "this is the parent";
    char child[] = "this";

    bool ret = isUnique(parent,child);

    if(ret){printf("%c is a permutation of %c.",child,parent);}
    else{printf("%c is not a permutation of %c.",child,parent););}
}