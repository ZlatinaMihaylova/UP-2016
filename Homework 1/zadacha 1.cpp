#include <iostream>
using namespace std;
int main ()
{
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (b > a)
        a = b;
    if (c > a)
        a = c;
    if (d > a)
        a = d;
    if (e > a)
        a = e;
    cout << "The biggest number is " << a << endl;
    return 0;
}
