/* n1.c                                                      *
 * specially crafted to feed your brain by gera@core-sdi.com */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 80

unsigned int atoul(char *str) {
    unsigned int answer=0;
    for (;*str && isdigit(*str);
        answer *= 10, answer += *str++-'0');
    return answer;
}

int main(int argv, char **argc) {
    char buf[MAX_SIZE],*pbuf=buf;
    int count = atoul(argc[1]);
    
    if (count >= MAX_SIZE) count = MAX_SIZE-1;

    while (count--) *pbuf++=getchar();
    *pbuf=0;
}
