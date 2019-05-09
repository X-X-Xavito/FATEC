#include <stdio.h>

int main(void){
  long int num, sum =0;

  printf("Informe o número: ");
  scanf("%ld", &num);

  for(int i = 1; i < num; i++){
    if(num%i == 0){
      sum+=i;
    }
  }

  if (sum == num){
    printf("%ld é perfeito.\n", num);
  }
  else{
    printf("%ld não é perfeito.\n", num);
  }

}
