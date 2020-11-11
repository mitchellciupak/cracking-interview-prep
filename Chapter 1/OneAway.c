// 1.5 Arrays and Stirngs - One Away
// Mitchell Ciupak
// 20201111

/*
OneAway: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.
EXAMPLE
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bake -> false

Page(90,101)
*/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>

int BLEN = 0;
int CLEN = 0;

bool oneAway(char* base, char* check){
    bool isOneAway = true;

    //Fill Base Hash
    int* baseHash = calloc(sizeof(int), 26);

    for (int i = 0; i < BLEN; i++) {
        baseHash[i] += 1;
    }

    //Fill Check Hash
    int* checkHash = calloc(sizeof(int), 26);

    for (i = 0; i < CLEN; i++) {
        checkHash[i] += 1;
    }

    //Subract Check Hash from Base Hash
    for (i = 0; i < 26; i++)
    {
        if (baseHash[i] > 0){
            checkHash[i] = baseHash[i] - checkHash[i];
            if (checkHash[i] < 0){
                checkHash[i] = 0;
            }
        }
    }

    //Sum Checkhash
    int sum = 0;
    for (i = 0; i < 26; i++)
    {
        sum += checkHash[i];
        if (sum > 2){
            isOneAway = false;
        }
    }


    free(baseHash);
    free(checkHash);
    return isOneAway;
}

void main(){

    char base[] = "pale";
    char check[] = "ple";
    unsigned int blen = strlen(base);
    unsigned int clen = strlen(check);
    BLEN = blen;
    CLEN = clen;

    //Output
    if (oneAway(base, check)){
        printf("True");
    }
}