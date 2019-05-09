#include <stdio.h>

int main(void){
  long int num, sum =0;

  printf("Informe o número: ");
  scanf("%d", &num);

  for(int i = 1; i < num; ++i){
    if(num%i == 0){
      sum+=i;
    }
  }

  if (sum == num){
    printf("%d é perfeito. \n", num);
  }
  else{
    printf("%d não é perfeito. \n", num);
  }

}
