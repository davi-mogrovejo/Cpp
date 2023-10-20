#include <stdio.h>

int main() {
 int colunas,j;
 int anterior;

 int linhas;
 do {
scanf("%d",&linhas);
 } while (linhas < 0);


 anterior = 1;
 printf("%d\n",anterior);

 if (linhas) {
int linha_atual = 1;
colunas = 2;

linha_atual = 1;
for(j=1;j<colunas && linha_atual <= linhas;) {

   if(j==1) printf("1 ");
   anterior = anterior*(linha_atual-j+1)/j;
   printf("%d ", anterior);
   j++;
   if (j == colunas) {
	 anterior = 1;
	 linha_atual++;
	 colunas = linha_atual+1;
	 j=1;
	 puts("");
   }
}

 }
}
