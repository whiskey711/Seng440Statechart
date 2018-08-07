#include <stdio.h>
#include <stdlib.h>

void Go_node(int node){return node+1;}

void switch_with_func2Ptr(int node, void(prt2Func)(int){
  ptr2Func(node);
}

void main(){
  int i;
  int n = 100;
  
    char sig;
    printf("Nit's in %d th node,plz Enter a value :",i);
    sig = getchar();
    char node = i+'0';
    while(1){
      if(sig == node){
       printf("sig is equal to i");
       i = switch_with_func2Ptr(i,&Go_node);
       node = i+'0';
       }else if(sig =='X'){ 
          exit(0); 
       }else{
          printf("sig is not euqal to i");
       }
   }

}
