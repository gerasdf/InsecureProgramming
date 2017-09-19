/* abo10.c                                                   *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* Deja-vu                                                   */

char buf[256];

int main(int argv,char **argc) {
    char *pbuf=(char*)malloc(256);

    gets(buf);
    free(pbuf);
}
