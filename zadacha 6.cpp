#include <iostream>
using namespace std;
void initArray(double* arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void sredno(double *arr, int n)
{
    int index = -1;
    if (arr[n-1] == arr[n-2])
    {
        cout << "Index: " << n-1;

    }
    else
    {
        for (int i = 1; i < n - 1; i ++)
        {
            if ((arr[i-1]+arr[i+1])/2 == arr[i])
            {
                index = i;
            }
        }
        if (index == -1 && arr[0]==arr[1])
        {
            cout << "Index: " << 0;
        }
        else
        {
            if (index != -1)
            {
                cout << "Index: " << index;
            }
            else cout << -1;
        }
    }
}
int main()
{
    double arr[100];
    int SIZE;
    cout << "Size: ";
    cin >> SIZE;
    initArray(arr, SIZE);
    sredno(arr, SIZE);
    return 0;
}
