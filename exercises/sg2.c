/* sg2.c                                                   *
 *  * specially crafted to feed your brain by gera@corest.com */

void func(char *msg) {
   char buf[80];
   strcpy(buf,msg);
}

int main(int argv, char** argc) {
   func(argc[1]);
}
