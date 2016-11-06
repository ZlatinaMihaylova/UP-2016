#include <iostream>
using namespace std;
int main ()
{
    double a, b, c;
    cin >> a >> b >> c;
    int product = 0;
    if ( a == 0 || b == 0 || c == 0)
        cout << "The product is 0" << endl;
    else if (a < 0)
        product += 1;
    else if (b < 0)
        product += 1;
    else if (c < 0)
        product += 1;
    if (product % 2 == 0)
        cout << "+";
    else
        cout << "-";

    return 0;
}
