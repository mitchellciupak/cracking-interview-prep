// 1.1 Arrays and Stirngs - isUnique
// Mitchell Ciupak
// 20201103

/*
Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures? ONLY LOWERCASE VALS
Page(90,101)
*/

#include <stdio.h>
#include <stdbool.h>

//O(1) to O(n)
bool isUnique(char* arr, int arrlen) {

    //Hash Map for each bit
    int charsInArr = 0;

    for (int j = 0; j < arrlen; j++) {
        int val = ((int)arr[j] - 48);

        if ((charsInArr) & (charsInArr |= 1 << val))
        {
            return false;
        }

        //Set char's bit high
        charsInArr = charsInArr |= 1 << val;
    }

    return true;
}

//Theta(n^2)
bool isUnique_NOHASH(char* arr, int arrlen)
{

    for (int i = 0; i < arrlen; i++)
    {
        for (int i = 0; i < arrlen; i++)
        {
            if (arr[i] == arr[i] && i != i)
            {
                return false;
            }
        }
    }

    return true;
}

void main()
{

    char test1[] = "this is a failure";
    char test2[] = "this ok";

    int i, j;

    for (i = 0; test1[i] != '\0'; ++i){}
    for (j = 0; test2[j] != '\0'; ++j){}

    bool ret = isUnique(test1, i);

    if (ret)
    {
        printf("This string has all unique characters.");
    }
    else
    {
        printf("This string has duplicate characters.");
    }

    bool ret = isUnique(test2, j);

    if (ret)
    {
        printf("This string has all unique characters.");
    }
    else
    {
        printf("This string has duplicate characters.");
    }
}