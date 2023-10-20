#include<iostream>
#include <locale.h>

using namespace std;
main()
{
   double q, c, p = 0, pm = 1, s;
   int col,j,ant,linha;
   setlocale(LC_ALL, "Portuguese");
   do {
printf("Digite a linha (n) da coluna do Binômio de Newton desejada _(x+y)^n_ : "); 
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
   cout << "Digite o números de termos da sequencia de Fibonacci desejados:" << endl;
   cin >> q;
   if(q<0)
   {printf("ERRO: Não é possível uma sequência com quantidade de termos negativos.");
   }
else{
   cout << " O(s) primeiro(s) " << q << " termos da sequencia são: " << endl;
   for ( c = 0 ; c < q ; c++ )
   {
      if ( c <= 1 )
         pm = c;
      else
      {
         s = p + pm;
         p = pm;
         pm = s;
      }
      cout << pm << endl;
  }
}
}


