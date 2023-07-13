#include <string.h>

char * mergeAlternately(char * word1, char * word2){
    int len = strlen(word1) + strlen(word2);
    char *ret = calloc(len + 1, sizeof(char));
    int i = 0;
    while (*word1 || *word2){
        if (*word1){
            ret[i] = *word1++;
            i++;
        }
        if (*word2){
            ret[i] = *word2++;
            i++;
        }
    }
    return ret;
}
