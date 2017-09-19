/* s4.c                                                     *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* recurring nightmare */

int main(int argv,char **argc) {
    char *pbuf=(char*)malloc(strlen(argc[2])+1);
    char buf[256];

    strcpy(buf,argc[1]);
    for (;*pbuf++=*(argc[2]++););
    while(1);
}
