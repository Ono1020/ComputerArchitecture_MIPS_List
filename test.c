#include "stdio.h"
#define N 6
int judge(int num);

int main(void){
  int even_sum, odd_sum, i, z;
  even_sum = 0;
  odd_sum = 0;

  for(i=0; i < N; i++){
    z = judge(i);
    if(z == 0){
      even_sum = even_sum + i;
    } else {
      odd_sum = odd_sum + i;
    }
  }

  return 0;
}

int judge(int num){
  int deteo, x, y;
  x = num / 2;
  y = x * 2;
  deteo = num - y;
  return(deteo);
}