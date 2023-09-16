#include <stdio.h>
/* Obter notas calcular media verifica se o aluno foi reprovado ou aprovado
se a media for maior que 7.
*/
int main(void)
{
  // Variaveis
  float nota1, nota2, media;

  printf("Digite o valor da primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite o valor da segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;
  if (media >= 7)
  {
    printf("Media = %.2f\n", media);
    printf("Aprovado");
  }
  else
  {
    printf("Media = %.2f\n", media);
    printf("Reprovado");
  }

  getch();

  return 0;
}