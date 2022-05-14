#include <stdio.h>

#define PI 3.1415926


int main(void){

  float area, raio;
  printf("Descubra a área do círculo\n");
  printf("digite o raio: ");
  
  scanf("%f",&raio);
  area = PI * raio * raio;
  printf("Área do círculo = %f",area);

  return 0;
}