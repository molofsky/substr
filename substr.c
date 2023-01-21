/* Function to return the substring from given start and end characters
*
* @author Adrian Molofsky
* @version 10/31/22
*/

#include <string.h>
#include <stdio.h>

char *substr(const char *s, char start, char end, char result[]) {
    result[0] = '\0';
    char *first = strchr(s, start);
    if (!first) {
        return result;
    }
    char *last = strchr(first + 1, end);
    if (!last) {
        return result;
    }

    int len = last - first;
    strncpy(result, first, len + 1);
    result[len + 1] = '\0';
}

main() {
    char result[] = "";
    char * word = "Milan";
    char start = 'i';
    char stop = 'n';
    substr(word, start, stop, result);
    printf("%s", result);
    return 0;
}
