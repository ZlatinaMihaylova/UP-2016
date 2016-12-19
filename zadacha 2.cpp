#include <iostream>
using namespace std;
void initArray(int *arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void Reverse(int* arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << * (arr + i) << " ";
    }
}
int main()
{
    int arr[100], n;
    cout << "Size: ";
    cin >> n;
    initArray(arr, n);
    Reverse(arr, n);
    return 0;

}
