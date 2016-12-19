#include <iostream>
using namespace std;
void initArray(int *arr, int n)
{
    for (int i =0 ; i <n ; i ++)
    {
        cout << "arr[" << i <<"] = ";
        cin >> arr[i];
    }
}
int *tursq(int* arr, int n, int x)
{
    int br = 0;
    for (int i = 0; i < n; i ++)
    {
        if (arr[i]==x)
        {
            br = 1;
            return &arr[i];
            break;
        }
    }
    if (br != 1)
    {
        return NULL;
    }

}
int main ()
{
    int arr[100], n, x;
    cout << "Size: ";
    cin >> n;
    initArray(arr, n);
    cout << "Number: ";
    cin >>x;
    int* pnt = tursq(arr, n, x);
    cout << pnt;
    return 0;
}
