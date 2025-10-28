#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // zad 1
    /*
    const int n = 10;
    double tab[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 101;
        cout << tab[i] << endl;

    } */
    //int min = tab[0]
    // zad 2
    /* const int n = 10;
    double tab[n];
    double min;

    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 101;
        cout << tab[i] << endl;
        if (i == 0)
        {
            min = tab[i];
        }
        if (tab[i] < min)
        {
            min = tab[i];
        }
        

    }
    cout << "Minimum: " << min << endl; */
    // zad 3
    /* const int n = 10;
    double tab[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 101;
        cout << tab[i] << " " ;

    }
    cout << endl;
    int m = (n - 1), zamiana;
    for (int j = 0; j < n / 2; j++)
    {
        zamiana = tab[m];
        tab[m] = tab[j];
        tab[j] = zamiana;
        m = m - 1;


    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    } */
    // zad 4
    /* const int n = 10;

    int tab[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << tab[i][j];
        }
        cout << endl;
    } */
    int n;
    cout << "Wprowadz wartosc n: " << endl;
    cin >> n;
    int tab[n][n];




}