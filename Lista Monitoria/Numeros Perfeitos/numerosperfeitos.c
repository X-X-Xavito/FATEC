#include <stdio.h>

int main(void){
  int num, sum =0;

  printf("Informe o número: ");
  scanf("%d", &num);

  for(int i = 1; i < num; i++){
    if(num%i == 0){
      sum+=i;
    }
  }

  if (sum == num){
    printf("%d é perfeito.", num);
  }
  else{
    printf("%d não é perfeito.", num);
  }

}
