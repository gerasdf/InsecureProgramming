/* fs2.c                                                     *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* Can you tell me what's above the edge?                    */
int main(int argv,char **argc) {
    char buf[256];

    snprintf(buf,sizeof buf,"%s%c%c%hn",argc[1]);
    snprintf(buf,sizeof buf,"%s%c%c%hn",argc[2]);
}
