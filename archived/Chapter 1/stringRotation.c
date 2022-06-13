// 1.9 Arrays and Stirngs - String Rotaion
// Mitchell Ciupak
// 20201114

/*
String Rotation:Assumeyou have a method isSubstringwhich checks if oneword is a substring
of another. Given two strings, sl and s2, write code to check if s2 is a rotation of sl using only one
call to isSubstring (e.g., "waterbottle" is a rotation of"erbottlewat").
Page(91,102)
*/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>

bool isRotation(char* sl, char* s2) {
    int len = strlen(sl);

    if (len == s2.length() && len > 0) {
        char* slsl = sl + sl;
        return isSubstring(slsl, s2);
    }

    return false;
}