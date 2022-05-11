//usr/bin/gcc -nostartfiles "$0" && exec ./a.out "$@"
#include<stdio.h>
#define begin(m,a,i,n) m##a##i##n
#define start begin(m,a,i,n)
  
int start() {
   printf("this program has no main");
}
