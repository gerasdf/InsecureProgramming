/* sg5.c                                                   *
 * specially crafted to feed your brain by gera@corest.com */

int need_to_check = 1;  // XXX: Add global configuration

// XXX: Add real encryption here
#define decrypt(dest,src)     strcpy(dest,src)  

int check(char *user) {
    char temp[80];

    decrypt(temp,user);
    
    // XXX: add some real checks in the future
    return !strcmp(temp,"gera");
}

int main(int argv, char **argc) {
    int user_ok;

    user_ok = check(argc[1]);
    if (!user_ok && need_to_check) exit(1);
    exit(0);
}
