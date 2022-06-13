// 1.6 Arrays and Stirngs - Stirng Compression
// Mitchell Ciupak
// 20201111

/*
String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).

Page(91,102)
*/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>

int BLEN = 0;
int CLEN = 0;

char* compress(char str) {
    /* Check final length and return input string if it would be longer. */
    int finallength = countCompression(str);
    if (finallength >= str.length()) return str;
    StringBuilder compressed = new StringBuilder(finalLength); // initial capacity
    int countConsecutive = 0;
    for (int i = 0; i < str.length(); i++) {
        countConsecutive++;
        /* If next character is different than current, append this char to result.*/
        if (i + 1 >= str.length() I I str.charAt(i) != str.charAt(i + 1)) {
            compressed.append(str.charAt(i));
            compressed.append(countConsecutive);
            countConsecutive = 0;
        }
    }
    return compressed.toString();
}

int countCompression(char* str) {
    int compressedlength = 0;
    int countConsecutive = 0;
    for (int i = 0; i < str.length(); i++) {
        countConsecutive++;
        /* If next character is different than current, increase the length.*/
        if (i + 1 >= str.length() I I str.charAt(i) != str.charAt(i + 1)) {
            compressedlength += 1 + String.valueOf(countConsecutive).length();
            countConsecutive = 0;
        }
    }
    return compressedlength;
}

void main(){

    char string[] = "aabcccccaaa";
    unsigned int slen = strlen(string);

    printf("%s", stringComp(string, slen));
}