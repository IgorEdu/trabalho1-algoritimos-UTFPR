#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sem_modificadores;
  short int short_int;
  long int long_int;
  signed int signed_int;
  unsigned int unsigned_int;

  char c;
  signed char sc;
  unsigned char uc;

  sem_modificadores = -999999999;
  short_int = 1111;
  long_int = 99999999;
  signed_int = 222222;
  unsigned_int = -333333;

  printf("|-------------------------------------------------------------------------------------------------------\n");
  printf("| Dado sem modificador: %d ", sem_modificadores);
  printf("- Tamanho de int sem modificadores em bytes: %d\n", sizeof(sem_modificadores));
  printf("|-------------------------------------------------------------------------------------------------------\n");
  printf("| Dado com modificador short: %d ", short_int);
  printf("- Tamanho de int com modificador short em bytes: %d\n", sizeof(short_int));
  printf("|-------------------------------------------------------------------------------------------------------\n");
  printf("| Dado com modificador long: %d ", long_int);
  printf("- Tamanho de int com modificador long em bytes: %d\n", sizeof(long_int));
  printf("|-------------------------------------------------------------------------------------------------------\n");
  printf("| Dado com modificador signed: %d ", signed_int);
  printf("- Tamanho de int com modificador signed em bytes: %d\n", sizeof(signed_int));
  printf("|-------------------------------------------------------------------------------------------------------\n");
  printf("| Dado com modificador unsigned: %d ", unsigned_int);
  printf("- Tamanho de int com modificador unsigned em bytes: %d\n", sizeof(unsigned_int));
  printf("|-------------------------------------------------------------------------------------------------------\n");
  printf("|\n");
  printf("|-------------------------------------------------------------------------------------------------------\n");
  printf("| Tamanho de char sem modificadores em bytes: %d\n", sizeof(c));
  printf("| Tamanho de char com modificador signed em bytes: %d\n", sizeof(sc));
  printf("| Tamanho de char com modificador unsigned em bytes: %d\n", sizeof(uc));
  printf("|-------------------------------------------------------------------------------------------------------\n");

  return 0;
}