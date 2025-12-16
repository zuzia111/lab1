#include <iostream>
#include <cmath>
using namespace std;
struct punkt
{
    double x, y;
};
struct prostokat
{
    punkt p1, p2;
};
struct kolo
{
    punkt s;
    double promien;
};
double odleglosc(punkt p1, punkt p2)
{
    double d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return d;
}
double pole_prostokata(prostokat p)
{
    double a = abs(p.p2.x - p.p1.x);
    double b = abs(p.p2.y - p.p1.y);
    double pole = a * b;
    return pole;
}
double pole_kola(kolo k)
{
    double wynik = (k.promien * k.promien) * 3.14159265359;
    return wynik ;
}
int main()
{
   /* punkt p1, p2;
    p1.x = 0;
    p1.y = 0;
    p2.x = 1;
    p2.y = 1;
    cout << "Odleglosc miedzy punktami wynosi " << odleglosc(p1, p2) << endl; */
    /*
    punkt p1, p2;
    p1.x = 0;
    p1.y = 0;
    p2.x = 2;
    p2.y = 1;
    cout << "Pole prostokata wynosi: " << pole_prostokata(p1, p2) << endl; */
    /* prostokat po1;
    po1.p1.x = 0;
    po1.p1.y = 0;
    po1.p2.x = 1;
    po1.p2.y = 1;
    prostokat po2;
    po2.p1.x = 0;
    po2.p1.y = 0;
    po2.p2.x = 2;
    po2.p2.y = 1;
    if (pole_prostokata(po1) > pole_prostokata(po2))
    {
        cout << "Wieksze pole prostokata wynosi: " << pole_prostokata(po1) << endl;
    }
    else
    {
        cout << "Wieksze pole prostokata wynosi: " << pole_prostokata(po2) << endl;
    } */
    /* kolo k;
    k.promien = 4;
    cout << "Pole kola wynosi: " << pole_kola(k) << endl; */
   
}
