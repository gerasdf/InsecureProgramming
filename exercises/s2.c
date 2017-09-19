/* s2.c                                                     *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* do you resign? */

int main(int argv,char **argc) {
    char *pbuf=(char*)malloc(strlen(argc[2])+1);
    char buf[256];

    signal(10,10);
    strcpy(buf,argc[1]);
    for (;*pbuf++=*(argc[2]++););
    while(1);
}
