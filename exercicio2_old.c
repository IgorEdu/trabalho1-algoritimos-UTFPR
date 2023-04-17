#include <stdio.h>
#include <stdlib.h>

int valida_usuario(int usuario)
{
  if (usuario > 8 && usuario < 280)
  {
    printf("Usuario %d ativado...", usuario);
    return 1;
  }
  else
  {
    printf("Usuario invalido!\n");
    return 0;
  }
}

float calcular_imposto(float salario)
{
  float imposto;

  if (salario < 1212)
  {
    goto erro_minimo;
  }

  if (salario <= 1903.98)
  {
    imposto = 0;
  }
  else if (salario <= 2826.65)
  {
    imposto = (salario - 1903.98) * 0.075 - 142.80;
  }
  else if (salario <= 3751.05)
  {
    imposto = (salario - 2826.65) * 0.15 - 354.80;
  }
  else if (salario <= 4664.68)
  {
    imposto = (salario - 3751.05) * 0.225 - 636.13;
  }
  else
  {
    imposto = (salario - 4664.68) * 0.275 - 869.36;
  }

  return imposto;

erro_minimo:
  printf("Erro: nao esta sendo aceito salarios menores que o salario minimo nacional.\n");
  exit(1);
}

int main()
{
  int usuario;
  float salario, imposto;

  while (1)
  {
    printf("Digite o codigo do usuario ou digite 0 para encerrar o programa. \n");
    scanf("%d", &usuario);

    if (usuario != 0)
    {
      int usuario_validado = valida_usuario(usuario);
      if (usuario_validado == 1)
      {
        printf("Digite o seu salario: ");
        scanf("%f", &salario);
        while (salario < 0)
        {
          printf("O salario deve ser positivo. Digite novamente: ");
          scanf("%f", &salario);
          continue;
        }
        imposto = calcular_imposto(salario);
        printf("O imposto a devido e de R$%.2f.\n", imposto);
      }
      // continue;
    }
    else
    {
      printf("Programa encerrado pelo usuario.\n");
      break;
    }
  }

  return 0;
}