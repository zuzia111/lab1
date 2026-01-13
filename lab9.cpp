#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void tablica(vector<int> &tab,string nazwa)
{
    ifstream plik(nazwa);
    string temp;
        while (getline(plik, temp))
        {
            tab.push_back(stoi(temp));

        }

}
void zawartoscpliku(string nazwapliku)
{
    ifstream plik(nazwapliku);
    string wiersz;
        while (getline(plik, wiersz))
        {
            cout << wiersz << endl;
        }

}


void liczby(int N, string nazwa)
{
    if (N < 0)
    {
        cout << "N musi byæ dodatnie" << endl;
    }
    else
    {
        ofstream plik(nazwa);
        for (int i = 0; i < N; i++)
        {
            plik << i << endl;
        }
        plik.close();

    }
}


int main()
{
    //liczby(10, "wynik.txt");
    //zawartoscpliku("wynik.txt");
    vector<int>tab(10);
      tablica(vector<int>tab(10), "wynik.txt");
}