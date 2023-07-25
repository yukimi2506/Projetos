#include<stdio.h>
#include<stdlib.h>


int main()
{
char tabuleiro[100][100];
char c, palavra[15];

int linha[5], coluna[5];

char **palavras;

palavras = (char **)calloc(5, sizeof(char *));

palavras[0]="dia";
palavras[1]="oi";
palavras[2]="ram";
palavras[3]="hoje";
palavras[4]="noite";

for(int i=0; i<40; i++)
  for(int j=0; j<40; j++)
    tabuleiro[i][j] = 'a' +  (char)(rand()%26);

for(int i=0; i<40; i++)
  {
  printf("\n[%d]", i);
  for(int j=0; j<40; j++)
    {
     //fazer de forma dinamica o armazenamento em um ponteiro
     //para uma letra chama para proximas posicoes sem alterar a posicao atual
     //busca enquanto as letras forem correspondentes as armazenadas
    if(tabuleiro[i][j] == 'o' && tabuleiro[i][j+1] == 'i')
      {
      linha[0] = i;
      coluna[0] = j;
      palavra[0] = 'o';
      palavra[1] = 'i';
      }
    if(tabuleiro[i][j] == 'd' && tabuleiro[i][j+1] == 'i' && tabuleiro[i][j+2] == 'a')
      {
      linha[1] = i;
      coluna[1] = j;
      palavra[2] = 'd';
      palavra[3] = 'i';
      palavra[4] = 'a';
      }
    printf("%c", tabuleiro[i][j]); 
    }
  }

printf("\n\n[%d][%d]%c%c", linha[0], coluna[0], palavra[0], palavra[1]);

printf("\n\n[%d][%d]%c%c%c\n", linha[1], coluna[1], palavra[2], palavra[3], palavra[4]);
return 0;
}
