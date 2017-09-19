/* fs3.c                                                    *
 * specially crafted to feed your brain by riq@core-sdi.com  */

/* Not enough resources?                    */

int main(int argv,char **argc) {
    char buf[256];

    snprintf(buf,sizeof buf,"%s%c%c%hn",argc[1]);
}
