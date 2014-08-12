#include <stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    "../../Modules/substring.h"

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
    char* result = strdup(string);
    char* stringdup = strdup(string);
    int stringLength = strlen(string);

    char* word = strtok(stringdup, " ");
    while(word != NULL){
        printf("word : |%s|\n", word);
        int wordLength = strlen(word);
        int i = findstr(word, string);
        printf("|%s| index in %s : %d\n",word, string, i);

        int from = i ;
        int to = i + wordLength - 1;
        printf("from : %d, to : %d\n", from , to );
        ReverseString(result, from, to);
        printf("Result --> %s\n", result);
        word = strtok(NULL, " ");
    }
    free(stringdup);
    
    ReverseString(result, 0 , strlen(result) - 1);
    printf("Final Result: %s\n", result);

}
