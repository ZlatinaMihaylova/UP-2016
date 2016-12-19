#include <iostream>
using namespace std;
void initArray(int *arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}
int sortirane(int arr[100], int SIZE)
{
    int swap;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    return 0;
}
void slivane(int* arr1, int* arr2, int SIZE1, int SIZE2, int arr3[100])
{
    int SIZE3 = SIZE1 + SIZE2;
    int b1 = 0, b2=0;
    for (int i = 0; i < SIZE3; i ++)
    {
        if (b1 < SIZE1 && b2 < SIZE2)
        {
            if (arr1[b1] < arr2[b2])
            {
                arr3[i] = arr1[b1];
                b1++;
            }
            else
            {
                arr3[i] = arr2[b2];
                b2++;
            }
        }
        else
        {
            if (b1 < SIZE1)
            {
                arr3[i] = arr1[b1];
                b1++;
            }
            else
            {
                arr3[i] = arr2[b2];
                b2++;
            }
        }
    }
    for (int i = 0; i < SIZE3; i ++)
    {
        cout << arr3[i] << " ";
    }
}
int main ()
{
    int arr1[100], arr2[100], arr3[100];
    int SIZE1, SIZE2;
    cout << "Length of the first array:";
    cin >> SIZE1;
    initArray(arr1, SIZE1);
    sortirane(arr1, SIZE1);
    cout << "Length of the second array:";
    cin >> SIZE2;
    initArray(arr2, SIZE2);
    sortirane(arr2, SIZE2);
    slivane(arr1, arr2,  SIZE1, SIZE2, arr3);
    return 0;
}
