/* sg6.c                                                   *
 * specially crafted to feed your brain by gera@corest.com */

// XXX: Add real encryption here
#define decrypt(dest,src)     strcpy(dest,src)  

int get_username(char *user) {
    char temp[80];

    decrypt(temp,user);
    
    return strdup(temp);
}

int main(int argv, char **argc) {
    char *user_name;

    user_name = get_username(argc[1]);
    printf("User name is '%s'\n",user_name);
    return 0;
}
