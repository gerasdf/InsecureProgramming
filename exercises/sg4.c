/* sg4.c                                                   *
 * specially crafted to feed your brain by gera@corest.com */

// XXX: Add real encryption here
#define decrypt(dest,src)     strcpy(dest,src)  

int check(char *user) {
    char temp[80];

    decrypt(temp,user);

    // XXX: add some real checks in the future
    return !strcmp(temp,"gera");
}

// XXX: Add real support for internationalization
#define LANG_MSG(dest,pattern) strcpy(dest,pattern);

int main(int argv, char **argc) {
    char msg[100];

    LANG_MSG(msg,"Get out of here!\n");
    if (!check(argc[1])) {
        printf(msg);
        exit(1);
    }
    exit(0);
}
