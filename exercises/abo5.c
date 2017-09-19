/* abo5.c                                                  *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* You take the blue pill, you wake up in your bed,    *
 *     and you believe what you want to believe        *
 * You take the red pill,                              *
 *     and I'll show you how deep goes the rabbit hole */

int main(int argv,char **argc) {
    char *pbuf=malloc(strlen(argc[2])+1);
    char buf[256];

    strcpy(buf,argc[1]);
    for (;*pbuf++=*(argc[2]++););
    exit(1);
}
