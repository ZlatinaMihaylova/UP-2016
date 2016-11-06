#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    switch ( x )
    {

        case 1:
        case 2:
        case 3:
            cout << x * 10 << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << x * 100 << endl;
            break;
        case 7:
        case 8:
        case 9:
            cout << x * 1000 << endl;
            break;
        default :
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
