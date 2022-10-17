#include <iostream>

int Main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    a = a<=0?0:a; b = b<=0?0:b; c = c<=0?0:c;
    std::cout << (a + b < c || b + c < a || c + a < b)?"е":"не е";
}