#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
  int i;
  int n = 100;
  for(i=0;i<n;i++){
    char sig;
    printf("Now it's in %d th node,plz Enter a value :",i);
    sig = getchar();
    char node = i+'0';
    char newNode[10] = "A";
    newNode[strlen(newNode)] = node;
    newNode[strlen(newNode)+1] = '\0';
    if(sig == newNode){
      printf("sig is equal to i");
    }else if(sig =='X'){ 
      exit(0); 
    }else{
      i--;
      printf("sig is not euqal to i");
    }
  }
  printf("Done");

}