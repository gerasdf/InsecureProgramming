/* fs4.c                                                     *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* Have you ever heard about code reusability?               */

int main(int argv,char **argc) {
    char buf[256];

    snprintf(buf,sizeof buf,"%s%6$hn",argc[1]);
    printf(buf);
}


