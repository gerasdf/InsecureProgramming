/* e3.c                                                      *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* are you an enviromental threat                            */

char buf[256];

int main(int argv,char **argc) {
    strcpy(buf,argc[1]);
    setenv("ABO",argc[2],1);
    while(1);
}
