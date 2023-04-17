#include <stdio.h>
#include <stdlib.h>
// 1
void exemplo_break()
{
  int numero;
  printf("\n--------------------------------------------------------------------\n");
  printf("Como exemplo para o comando break sera utilizado um laco de repeticao\n while que aguarda um numero positivo.\n");
  printf("O programa ira verificar qual o quadrado do numero informado.\n");
  printf("Digitando o numero 0 e realizado a execucao do comando break.\n");
  printf("--------------------------------------------------------------------\n");

  while (1)
  {
    printf("Digite um numero positivo (ou 0 para sair): ");
    scanf("%d", &numero);

    if (numero == 0)
    {
      // Se o usuário digitar 0, o laço e interrompido com o comando "break"
      break;
    }

    if (numero < 0)
    {
      printf("Numero invalido. Digite um numero positivo.\n");
    }
    else
    {
      printf("O quadrado de %d e %d.\n", numero, numero * numero);
    }
  }

  printf("Fim do programa exemplo break.\n");
}

// 2
void exemplo_continue()
{
  int i, valor, soma, maximo;

  soma = 0;

  printf("\n--------------------------------------------------------------------\n");
  printf("Como exemplo para o comando continue sera utilizado um laco for que \n aguarda um numero inteiro.\n");
  printf("O programa ira verificar a soma dos valores pares desde o numero \n informado ate o valor do numero informado + 10.\n");
  printf("Caso o numero seja par sera somado com o valor anterior e sera\n chamado o comando continue.\n");
  printf("--------------------------------------------------------------------\n");

  printf("Digite um numero: ");
  scanf("%d", &valor);
  maximo = valor + 10;

  for (i = valor; i <= maximo; i++)
  {
    if (i % 2 == 0)
    {
      // Quando o valor de i for divisivel por 2, o comando "continue" e executado,
      // e a execução do laco e interrompida, indo diretamente para a proxima iteracao do laco
      soma += i;
      continue;
      printf("Nao passar por aqui");
    }
  }

  printf("A soma dos numeros pares do intervalo eh: %d ", soma);

  printf("\nFim do programa exemplo continue.\n");
}

// 3
int multiplica(int x, int y)
{
  int resultado = x * y;
  return resultado;
}
void exemplo_return()
{
  int x, y, resultado;

  printf("\n--------------------------------------------------------------------\n");
  printf("Como exemplo para o comando return sera utilizado uma funcao que \n aguarda 2 numeros inteiros.\n");
  printf("O programa ira realizar a multiplicacao dos valores informados e \n utilizara o comando return para retornar o valor do resultado.\n");
  printf("--------------------------------------------------------------------\n");

  printf("Digite o primeiro valor: ");
  scanf("%d", &x);
  printf("Digite o segundo valor: ");
  scanf("%d", &y);

  resultado = multiplica(x, y);
  printf("\nO resultado da multiplicacao de %d e %d eh %d\n", x, y, resultado);
  printf("\nFim do programa exemplo return.\n");
}

// 4
void exemplo_goto()
{
  int opcao_mensagem;
  printf("\n--------------------------------------------------------------------\n");
  printf("Como exemplo para o comando goto sera utilizado um menu para escolha\n da mensagem de retorno.\n");
  printf("O programa ira utilizar o comando goto para buscar a mensagem do indice.\n");
  printf("--------------------------------------------------------------------\n");

  printf("\n");
  printf("Escolha uma das opcoes para retornar uma mensagem: \n");
  printf("1 - mensagem de bom dia\n");
  printf("2 - mensagem de boa tarde\n");
  printf("3 - mensagem de boa noite\n");
  printf("Opcao: ");
  scanf("%d", &opcao_mensagem);
  if (opcao_mensagem == 1)
  {
    goto mensagem_dia;
  }
  else if (opcao_mensagem == 2)
  {
    goto mensagem_tarde;
  }
  else if (opcao_mensagem == 3)
  {
    goto mensagem_noite;
  }
  else
  {
    goto opcao_invalida;
  }

mensagem_dia:
  printf("\nBom dia, voce esta no programa de exemplo do comando goto.\n");
  goto fim;

mensagem_tarde:
  printf("\nBoa tarde, voce esta no programa de exemplo do comando goto.\n");
  goto fim;

mensagem_noite:
  printf("\nBoa noite, voce esta no programa de exemplo do comando goto.\n");
  goto fim;

opcao_invalida:
  printf("\nOpcao invalida!\n");
  goto fim;

fim:
  printf("\nFim do programa exemplo goto.\n\n");
}

// 5
void exemplo_exit()
{
  printf("\n--------------------------------------------------------------------\n");
  printf("Como exemplo para funcao exit sera utilizado um laco de repeticao\n while que aguarda um numero positivo.\n");
  printf("O programa ira verificar qual opcao de saida selecionada.\n");
  printf("--------------------------------------------------------------------\n");

  int x, y;
  float resultado;
  while (1)
  {
    printf("Informe o primeiro valor: ");
    scanf("%d", &x);
    printf("Informe o segundo valor: ");
    scanf("%d", &y);

    if (x == 0 || y == 0)
    {
      printf("Erro 1\n");
      printf("Impossivel realizar realizar divisao por 0\n");
      exit(1);
    }
    else if ((x / y) < 0)
    {
      resultado = x / y;
      printf("Erro 2 \n");
      printf("O programa nao esta aceitando valores de resultado negativos\n");
      printf("Primeiro valor (%d), segundo valor (%d), resultado da divisao: %.2f\n", x, y, resultado);
      exit(2);
    }
    else if (x % y == 0)
    {
      resultado = x / y;
      printf("O primeiro valor (%d) e divisivel pelo segundo valor (%d), resultado da divisao: %.2f\n", x, y, resultado);
      printf("Fim da execucao sem erros\n");
      exit(0);
    }
    else if (x % y != 0)
    {
      resultado = x / y;
      printf("O primeiro valor (%d) nao e divisivel pelo segundo valor (%d), resultado da divisao: %.2f\n", x, y, resultado);
      printf("Fim da execucao sem erros\n");
      exit(0);
    }
    else
    {
      resultado = x / y;
      printf("Erro 3\n");
      printf("Resultado inesperado. Saida com erro generico\n");
      exit(3);
    }
  }
}

int main()
{
  while (1)
  {
    int opcao;
    printf("\n--------------------------------------------------------------------\n");
    printf("Exemplificando comandos de desvio\n");
    printf("Escolha uma das opcoes abaixo para verificar o seu funcionamento\n");
    printf("--------------------------------------------------------------------\n");
    printf("1 - exemplo comando break\n");
    printf("2 - exemplo comando continue\n");
    printf("3 - exemplo comando return\n");
    printf("4 - exemplo comando goto\n");
    printf("5 - exemplo funcao exit\n");
    printf("6 - sair\n");
    printf("--------------------------------------------------------------------\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      exemplo_break();
      break;
    case 2:
      exemplo_continue();
      break;
    case 3:
      exemplo_return();
      break;
    case 4:
      exemplo_goto();
      break;
    case 5:
      exemplo_exit();
      break;
    case 6:
      printf("Programa finalizado pelo usuario utilizando a opcao 6 - sair.\n");
      exit(0);
      break;
    default:
      printf("Opcao invalida\n");
      break;
    }
  }
  return 0;
}