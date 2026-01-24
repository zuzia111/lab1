#include <iostream>
using namespace std;
bool p(int rok)
{
    if ((rok % 4 == 0) && (rok % 100 != 0))
    {
        return true;
    }
    else
    {
        if (rok % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
/*int silnia(int liczba)
{
    int wynik = 1;
    for (int i = liczba; i > 0; i--)
    {
        wynik = wynik*i;
        
    }
    return wynik;
} */
int main()
{

    /* double a;
     double b;
     double c;
     double d;
     double max;
     double suma1=0;
     double suma2 = 0;
     double ile;
     double ile1=0;
     double ile2=0;
     double srednia1=0;
     double srednia2=0;
     cout << "Ile liczb? " << endl;
     cin >> ile;
     for (int i = 0; i < ile; i++)
     {
         cout << "Wprowadz liczbe: ";
         cout << i + 1 << endl;
         cin >> a;
         if (a >= 10)
         {
             suma1 = suma1 + a;
             ile1 = ile1 + 1;

         }
         else {
             suma2 = suma2 + a;
             ile2 = ile2 + 1;
         }
     }
     double srednia;
     if (ile1 > 0)
     {

         srednia1 = suma1 / ile1;
         cout << "Srednia 1 to: " << srednia1 << endl;
         cout << "Liczb wiekszych od 10: " << ile1 << endl;
     }
     else {
         cout << "Takich liczb nie bylo" << endl;
         }
     if (ile2 > 0)
     {

         srednia2 = suma2 / ile2;
         cout << "Srednia 2 to: " << srednia2 << endl;
         cout << "Liczb mniejszych od 10: " << ile2 << endl;
     }
     else {
         cout << "Takich liczb nie bylo" << endl;
     }

     /*
     //for (int i = 0; i < 2; i++) {

         //max = 0;
         cout << "Wprowadz a: " << endl;
         cin >> a;
         //if (max <= a)
         //{
         //    max = a;
        // }
         cout << "Wprowadz b: " << endl;
         cin >> b;
         //if (max <= b)
         //{
         //    max = b;
         //}
         cout << "Wprowadz c: " << endl;
         cin >> c;
         /*if (max <= c)
         {
             max = c;

         } */
         // cout << "Wprowadz d: " << endl;
        //  cin >> d;
          /*if (max <= d)
          {
              max = d;
          } */
          //cout << "Maximum to: " << max << endl;
      //}
          /*
          double suma;
          suma = a + b + c + d;
          double srednia = suma / 4;
          cout << "Suma to: " << suma << endl;
          cout << "Srednia to: " << srednia << endl; */
          /* int ilepar;
           int a;
           int b;
           int suma1=0;
           int suma = 0;
           int j = 0;
           cout << "Ile par liczb?: " << endl;
           cin >> ilepar;
           for (int i = 0; i < ilepar; i++)
           {
               cout << i + 1 << " ";
               cout << "para liczb:" << endl;
               cout << "Wprowadz liczbe 1: ";
               cin >> a;
               cout << "Wprowadz liczbe 2: ";
               cin >> b;
               if (a > b)
               {
                   j=j+1;
                   suma1 = a + b;
               }
               suma = suma + suma1;
           }
           cout << "Jest " << j << " par w ktorych liczba 1 jest wieksza od liczby 2" << endl;
           cout << "Suma liczb w ktorych liczba 1 jest wieksza od liczby 2 wynosi: " << suma << endl; */
           /*int w = 0;
           for (int i = 0; i <= 9; i++)
               {
               for (int j=1; j <= 10; j++)
               {
                   if (w == 0)
                   {
                       cout << j + i * 10;
                       cout << " ";
                       w = 1;
                   }
                   else
                   {
                       w = 0;
                   }


               }
               cout << endl;
               } */
               /*int n = 10;
               int tab[10];
               cout << "Wprowadz n: " << endl;
               cin >> tab[1];
               int w = 2;
               tab[0] = 1;

               cout << tab[0] << endl;
               for (int i = 0; i < n; i++)
               {
                   tab[i] = w;
                   cout << tab[i];
                   w = 2 * w;
                   cout << endl;
               } */
               /*int liczba1;
               cout << "Z jakiej liczby policzyc silnie? " << endl;
               cin >> liczba1;
               cout << silnia(liczba1) << endl; */
               /*string tekst;
               cout << "Wprowadz ciag znakow: " << endl;
               cin >> tekst;
               int k = tekst.length() - 1;
               int t = 0;
               int n = 0;
               for (int i = 0; i < tekst.length() / 2; i++)
               {

                   if (tekst[i] == tekst[k])
                   {
                       t++;
                   }
               }
               if (t == 0)
               {
                   cout << "Nie jest palindromem" << endl;
               }
               else
               {
                   cout << "Jest palindromem" << endl;
               } */
               /*int rok;
               bool wynik;

               cout << "Wprowadz rok: " << endl;
               cin >> rok;
               if (p(rok))
               {
                   cout << "Przestepny" << endl;

               }
               else
               {
                   cout << "Nieprzestepny" << endl;
               } */
    int tab[4][4];
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            tab[i][j] = i + j;
            cout << tab[i][j];
            cout << " ";
        }
        cout << endl;

    }
    int suma = 0;
        int tabl[4];
        for (int j = 1; j <= 4; j++)
        {
            for (int i = 1; i <= 4; i++)
            {
                suma = suma + tab[j][i];
            }
            tabl[j] = suma;
            suma = 0;
            cout << tabl[j] << endl;
        }
}
   