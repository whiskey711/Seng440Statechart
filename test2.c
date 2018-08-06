#include <stdio.h>
#include <stdlib.h>

void main(){
  int i;
  int n = 100;
  for(i=0;i<n;i++){
    char sig;
    printf("Now it's in %d th node,plz Enter a value :",i);
    sig = getchar();
    char node = i+'0';
    if(sig == node){
      printf("sig==i");
    }else if(sig =='X'){ 
      exit(0); 
    }else{
      i--;
      printf("sig!=i");
    }
  }
  printf("Done");

}