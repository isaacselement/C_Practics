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

    char* string = argv[1];
    int stringLength = strlen(string);

    char* word = strtok(string, " ");
    while(word != NULL){
        printf("word : %s\n", word);
        int i = strspn(string, word);
        printf("index : %d\n", i);

        word = strtok(NULL, " ");
    }


    
}
