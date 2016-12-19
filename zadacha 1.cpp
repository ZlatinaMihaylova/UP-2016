#include <iostream>
using namespace std;
void razmqna(int* x, int* y)
{
    int swap;
    swap = *x;
    *x= *y;
    *y = swap;
    cout << "x = ";
    cout << *x << endl;
    cout << "y = ";
    cout << *y << endl;
}
int main ()
{
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    razmqna(&x, &y);
    return 0;
}
