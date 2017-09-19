/* sg1.c                                                   *
 * specially crafted to feed your brain by gera@corest.com */

int func(char *msg) {
    char buf[80];

    strcpy(buf,msg);
    // toupper(buf);        // here just to give func() "some" sence
    strcpy(msg,buf);
    exit(1);
}

int main(int argv, char** argc) {
    func(argc[1]);
}
