#include <stdio.h>
#include <locale.h>

int main() {
 int col,j,ant,linha;
 setlocale(LC_ALL,"Portuguese");
 do {
printf("Digite a linha da coluna do Binômio de Newton desejada:");
scanf("%d",&linha);
 } while (linha < 0);

 col = linha+1;
 ant = 1;
 printf("%d ",ant);

 for(j=1;j<col;j++) {
 ant = ant*(linha-j+1)/j;
 printf("%d ", ant);
 }
 puts("");
}
