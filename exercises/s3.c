/* s3.c                                                     *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* Give me a sign!!!!                                       */

int main(int argv,char **argc) {
    char *pbuf=(char*)malloc(strlen(argc[2])+1);
    char buf[256];

    alarm(1);
    strcpy(buf,argc[1]);
    for (;*pbuf++=*(argc[2]++););
    while(1);
}
