/* abo9.c                                                    *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* free(your mind)                                           */
/* I'm not sure in what operating systems it can be done     */

int main(int argv,char **argc) {
    char *pbuf1=(char*)malloc(256);
    char *pbuf2=(char*)malloc(256);

    gets(pbuf1);
    free(pbuf2);
    free(pbuf1);
}
