#include <stdio.h>
#include <stdlib.h>

void main(){
  int i;
  int n = 100;
  for(i=0;i<n;i++){
    char sig;
    printf("Now it's in %d th node,plz Enter a value :",i);
    sig = getchar();
    switch(sig){
      const char node = i;
      case node:;break;
      case 'X' : exit(0);break;
      default:i--;break;
    }

  }
}