#include <iostream>
using namespace std;
int main ()
{
    double a, b;
    cin >> a >> b;
    int sum = a + b;
    cout << (sum % 2 == 0 ? sum = sum * 2 : sum = sum / 2)  << endl;

    return 0;
}
