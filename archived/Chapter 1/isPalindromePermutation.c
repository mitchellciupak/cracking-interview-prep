// 1.4 Arrays and Stirngs - Palindrome Permutation
// Mitchell Ciupak
// 20201111

/*
Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome.
A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearrangement
of letters. The palindrome does not need to be limited to just dictionary words.
Input: Tact Coa
Output: True (permutations: "taco cat", "atco eta", etc.)
Page(90,101)
*/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>

int LEN = 0;
int TLEN = 0;

bool isPalindrome(int* table){
    /*Make sure that there is no more than one odd freq of each char*/

    bool oddFound = false;

    for (int i = 0; i < TLEN; i++) {
        if (table[i] % 2 == 1){
            if (oddFound){
                return false;
            }
            oddFound = true;
        }
    }

    return true;
}

int getCharNum(char c){
    /*Map each char to an int value, case insensitive*/

    int val = ((int)c - 48);

    //UPPER to Lower
    if (val >= 26){ val -= 26; }

    return val;
}

int* createCharFreqTable(char* phrase){

    //Find TLEN

    int* table = malloc(sizeof(int) * TLEN);

    //Count Occurances

    return table;
}


bool isPalindromePermutation(char* phrase) {
    int[] table = createCharFreqTable(phrase);
    return isPalindrome(table);

}

void main(){

    char test1[] = "Tact Coa";
    unsigned int tlen = strlen(test1);
    LEN = tlen;

    //Output
    if (isPalindromePermutation(test1)){
        printf("True");
    }
}