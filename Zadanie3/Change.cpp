#include <iostream>

using namespace std;

void Change(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    cout << a << " " << b << endl;
    
}
