/* specially crafted to feed your brain by gera@core-sdi.com */

/* Now, your misson is to make abo1 act like this other program:
 *
    char buf[100];

    while (1) {
        scanf("%100s",buf);
        system(buf);
    }

 * But, you cannot execute code in stack.
 */

int main(int argv,char **argc) {
    char buf[256];

    strcpy(buf,argc[1]);
}
