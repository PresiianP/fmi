#include <iostream>

int Main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    a = a <= 0 ? 0 : a; b = b <= 0 ? 0 : b; c = c <= 0 ? 0 : c;
    bool Triangle = (a + b < c || b + c < a || c + a < b) ? 1 : 0;
    if (Triangle) std::cout << "false"; else std::cout << "true";
}