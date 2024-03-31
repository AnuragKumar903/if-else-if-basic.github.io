// if mai jane ke bad else if mai nahi jaae ga par if mai ja sakta hai
// else if mai jane ke bad dusre else if mai nahi jaa sakta hai

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  if(n < 2)
    printf("Hello World\n");

  if(n < 3)
     printf("dobar conditioon check hua\n");
  else if(n > 3){
    printf("if ke andar ghusne ke bad else if mai ghus sakta hai\n");
  }
  else if(n > 4){
      printf("if ke andar ghusne ke bad else if mai ghus sakta hai\n");
    }
  else{
    printf("chota hai\n");
  }
  return 0;
}