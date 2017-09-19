/* e5.c                                                      *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* is this possible?                                         */

char buf[256];

int main(int argv,char **argc) {
    strcpy(buf,argc[1]);
    perror(argc[2]);
    while(1);
}
