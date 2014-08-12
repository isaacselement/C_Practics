/*
 * =====================================================================================
 *
 *       Filename:  ReverseString.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/11/14 19:35:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include    <stdio.h>
#include    <string.h>


void ReverseString(char* s, int from, int to)
{
    while(from < to)
    {
        char t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

int main(int argc, char *argv[])
{
        printf("%d \n", argc);

   for(int i = 0 ; i < argc ; i++)
   {
        printf("%d : %s \n", i, argv[i]);
   } 

    char* indexChar = argv[1];
    int index = indexChar[0] - '0';
    char* string = argv[2];
    int stringLength = strlen(string);

    ReverseString(string, 0, stringLength - index - 1);
    
    printf("TempResult: %s \n", string);

    ReverseString(string, stringLength - index , stringLength - 1);

    printf("TempResult : %s\n ", string);

    ReverseString(string, 0, stringLength - 1);

    printf("Result: %s\n", string);
    
}
