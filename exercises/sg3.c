/* sg3.c                                                   *
 * specially crafted to feed your brain by gera@corest.com */

char *read_it(char *msg) {
    char buf[128];
    int count;

    buf[read(0,buf,sizeof buf)]=0;
    return strdup(buf);
}

int main(int argv, char **argc) {
    char *msg = malloc(1000);

    snprintf(msg,1000,"User: %s",read_it(msg));
}
