// 1.3 Arrays and Stirngs - URLify 
// Mitchell Ciupak
// 20201105

/*
URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
has sufficient space at the end to hold the additional characters, and that you are given the "true"
length of the string. (Note: If implementing in Java, please use a character array so that you can
perform this operation in place.) 
Page(90,101)
*/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>

//T: O(n), S: O(n)
bool isPermutation(char * arr, int len) {

    char * retStinrg = calloc(sizeof(char),len * 3); //worst case 

    //Swap '' with '%'
    int j = 0
    for(int i = 0; i < len; i++){
        if(arr[i] == ' '){
            retStinrg[j] = '%';
            retStinrg[j+1] = '2';
            retStinrg[j+2] = '0';
            j += 3;
        }
        else {
            retStinrg[j] = arr[i];
            j++;
        }
    }

    return retStinrg;

}

//reduce space by doing it inplace and checking for spaces in a loop: T: 0(2n) S: O(1)

void main(){

    char test1[] = "this is the url";

    unsigned int tlen = strlen(test1);

    char * ret = URLify(test1,tlen);

    printf("%c",ret);
    free(ret);
}