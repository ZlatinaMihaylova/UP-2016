#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cin >> a >> b;
    int c = (a > b ? a : b);
    cout << (c > 0 ? c : c = c * -1) << endl;

    return 0;
}
