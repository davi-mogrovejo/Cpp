#include<iostream>
#include <locale.h>
 
using namespace std;
main()
{
   double q, c, p = 0, pm = 1, s;
   int col,j,ant,linha;
   setlocale(LC_ALL, "Portuguese");
   cout << "Digite o n�meros de termos da sequencia de Fibonacci desejados:" << endl;
   cin >> q;
   if(q<0)
   {printf("ERRO: N�o � poss�vel uma sequ�ncia com quantidade de termos negativos.");
   }
else{
   cout << " O(s) primeiro(s) " << q << " termos da sequencia s�o: " << endl;
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





