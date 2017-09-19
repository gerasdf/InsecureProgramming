/* abo3.c                                                    *
 * specially crafted to feed your brain by gera@core-sdi.com */

/* This'll prepare you for The Next Step                     */

int main(int argv,char **argc) {
    extern system,puts; 
    void (*fn)(char*)=(void(*)(char*))&system;
    char buf[256];

    fn=(void(*)(char*))&puts;
    strcpy(buf,argc[1]);
    fn(argc[2]);
    exit(1);
}
