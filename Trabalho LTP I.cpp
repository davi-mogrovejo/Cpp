#include<iostream> //Trabalho de LTP I 08/11/2018 2ª semestre
#include <locale.h> //Davi Mogrovejo Brasil RA:21803830
 
using namespace std;
main()
{
double q, c, p = 0, pm = 1, s;
int col,j,ant,linha;
setlocale(LC_ALL, "Portuguese");
printf("Digite o expoente (n) no Binômio de Newton ((x+y)^n): ");
puts("");
scanf("%d",&linha);
if(linha<=(-1))
 {printf("ERRO: O Binômio de Newton nao aceita número negativo. (n) nao pode ser negativo");  }
else{
	cout << "O expoente " << linha << " no Binômio de Newton tem as constantes equivalentes à:" << endl;
while (linha < 0);

col = linha+1;
ant = 1;
 printf("%d ",ant);

 for(j=1;j<col;j++) {
 ant = ant*(linha-j+1)/j;
 printf("%d ", ant);
 }
}
  puts("");
   cout << "Digite o números de termos da sequencia de Fibonacci desejados:" << endl;
   cin >> q;
   if(q<=0)
   {printf("ERRO: Não é possível uma sequência com quantidade de termos negativos ou nulos.");
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


