#include <iostream>
using namespace std;
int main()
{
    // zad 1
    /* string tekst;
    cout << "Wprowadz ciag znakow: " << endl;
    cin >> tekst;
    int ile = 0;
    for (int i = 0; i < tekst.length(); i++)
    {
        if (tekst[i] == 'a')
        {
            ile = ile + 1;

        }
            
    }
    cout << "Ilosc 'a' w tym ciagu wynosi: " << ile << endl; */
    // zad 2
    /* string tekst;
    cout << "Wprowadz ciag znakow: " << endl;
    cin >> tekst;
    int ile = 0;
    for (int i = 0; i < tekst.length(); i++)
    {
        if (tekst[i] == 'a' || tekst[i] == 'o' || tekst[i] == 'u' || tekst[i] == 'e' || tekst[i] == 'i' || tekst[i] == 'y')
        {
            ile = ile + 1;

        }
     
    }
    cout << "Ilosc samoglosek w tym ciagu wynosi: " << ile << endl; */
    // zad 3
    /* string tekst;
    cout << "Wprowadz ciag znakow: " << endl;
    cin >> tekst;
    int k = tekst.length() - 1;
    int j;
    for (int i = 0; i < tekst.length() / 2; i++)
    {
        j = tekst[i];
        tekst[i] = tekst[k];
        tekst[k] = j;
        k--;
    }
    cout << tekst << endl; */
    // zad 4
    string tekst;
    cout << "Wprowadz ciag znakow: " << endl;
    cin >> tekst;
    int k = tekst.length() - 1;
    int t=0;
    int n=0;
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
    }
}
