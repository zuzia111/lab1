#include <iostream>
#include <math>

int main()
{
    // zadanie 1
    /* double a = 5;
    int b = 7;
    int suma = a + b;
    std::cout << suma << std::endl; */
    // zadanie 2
    /* double a, b, suma;
    std::cin >> a;
    std::cin >> b;
    suma = a + b;
    std::cout << suma << std::endl; */
    // zadanie 3
    /* double a, b, x;
    std::cout << "Wartoœæ a: " << std::endl;
    std::cin >> a;
    std::cout << "Wartoœæ b: " << std::endl;
    std::cin >> b;
    if (a == 0)
    {
        std::cout << ("Funkcja nie jest liniowa") << std::endl;
    }
    else
    {
        x = -b / a;
       std::cout << x << std::endl;
    } */
    //
    /* double a1, a2, b1, b2, c1, c2, x, y, w, wx, wy;
    std::cout << "Wprowadz a1: " << std::endl;
    std::cin >> a1;
    std::cout << "Wprowadz b1: " << std::endl;
    std::cin >> b1;
    std::cout << "Wprowadz c1: " << std::endl;
    std::cin >> c1;
    std::cout << "Wprowadz a2: " << std::endl;
    std::cin >> a2;
    std::cout << "Wprowadz b2: " << std::endl;
    std::cin >> b2;
    std::cout << "Wprowadz c2: " << std::endl;
    std::cin >> c2;
    w = (a1 * b2) - (a2 * b1);
    wx = (c1 * b2) - (c2 * b1);
    wy = (a1 * c2) - (a2 * c1);
    x = wx / w;
    y = wy / w;
    if (w == 0 && wx == 0 && wy == 0)
    {
        std::cout << "Uklad nieoznaczony" << std::endl;
    }
    else if (w == 0 && (wx != 0 || wy != 0))
    {
        std::cout << "Uklad sprzeczny" << std::endl;
    }
    else
    {
        std::cout << "x=" << x << " y=" << y << std::endl;
    }
    */
   int main()
{
    double a, b, c, x1, x2, delta;
    std::cout << "Wprowadz a, b, c: " << std::endl;
    std::cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                std::cout << "To rownanie jest tozsamosciowe" << std::endl;
            }
            else
            {
                std::cout << "To rownanie jest sprzeczne" << std::endl;
            }
        }
        else
        {
            x1 = -c / b;
            std::cout << "Rozwiazanie liniowe: x = " << x1 << std::endl;
        }
    }
    else
    {
        delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            std::cout << "x1 = x2 = " << x1 << std::endl;
        }
        else
        {
            std::cout << "Brak rozwiazan rzeczywistych" << std::endl;
        }
    }

    return 0;
}
