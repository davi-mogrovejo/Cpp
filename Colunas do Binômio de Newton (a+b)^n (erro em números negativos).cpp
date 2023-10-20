#include <stdio.h>
#include <locale.h>

main() {
 int col,j,ant,linha;
 setlocale(LC_ALL,"Portuguese");
 printf("Digite a linha da coluna do Binômio de Newton desejada:");
 scanf("%d",&linha);
 if(linha<=(-1))
 {printf("ERRO");}
else{
  while (linha < 0);

 col = linha+1;
 ant = 1;
 printf("%d ",ant);

 for(j=1;j<col;j++) {
 ant = ant*(linha-j+1)/j;
 printf("%d ", ant);
 }
}
}


