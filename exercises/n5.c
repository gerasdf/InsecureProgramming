/* n5.c                                                      *
 * specially crafted to feed your brain by gera@core-sdi.com */

#include <stdio.h>

int main(int argv, char **argc) {
    char **args,buf[80];
    unsigned int index,count;
    
    fscanf(stdin, "%u", &count);
    args = malloc(count*sizeof(char*));

    while (1) {
        fscanf(stdin,"%u %80s", &index, buf);
        if (index<count) args[index] = strdup(buf);
        else break;
    }
}

