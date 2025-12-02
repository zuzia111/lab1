#include <vector>
#include <iostream>
using namespace std;
//int main()
//{
	//zad 1
	/*
	
	vector<int> wektor;
	for (int i = 0; i < 10; i++)
	{
		wektor.push_back(rand() % 101);
	}
	for (int i = 0; i < wektor.size(); i++)
	{
		cout << wektor[i] << endl;
	} */
	// zad 2
int tworzeniewektorow(int a)
{
	vector<int> wektor;
	for (int i = 0; i < 10; i++)
	{
		wektor.push_back(rand() % 101);
	}
	for (int i = 0; i < wektor.size(); i++)
	{
		return wektor[i];
	}
}
int main()
	{
	int a;
	int tablica = tworzeniewektorow(a);
	cout << tworzeniewektorow(a) << endl;
	}



//}