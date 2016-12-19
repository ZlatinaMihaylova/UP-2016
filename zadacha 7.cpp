#include <iostream>
using namespace std;
void initArray(int* arr, int n)
{
    for (int i =0 ; i <n ; i ++)
    {
        cout << "arr[" << i <<"] = ";
        cin >> arr[i];
    }
}
void DELETE(int* arr, int n, int x)
{
    int br = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i]==x)
        {

            br=br+1;
            for (int j = i; j < n -1; j ++)
            {
                arr[j] = arr[j+1];
            }
        }
        else i=i+1;
    }
    for (int i = 0; i < n-br; i ++)
    {
        cout << arr[i];
    }
    cout << endl;
    if (br == 0)
    {
        cout << false;
    }
    else cout << true;
}
int main()
{
    int arr[100], n, br1;
    cout << "SIZE:";
    cin >> n;
    initArray(arr, n);
    int x;
    cout << "Number:";
    cin >> x;
    DELETE(arr, n, x);
    return 0;
}
