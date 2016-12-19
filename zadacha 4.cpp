#include <iostream>
using namespace std;
void initMatrix(int arr[100][100], int r, int c)
{
    for (int i = 0 ; i < r; i ++)
    {
        for (int j = 0; j < c; j ++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}
void print(int arr[100][100], int r, int c)
{
    for (int i = 0 ; i < r; i ++)
    {
        for (int j = 0; j < c; j ++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void transpose(int arr[100][100], int brr[100][100], int r, int c)
{
    for (int i = 0; i < r; i ++)
    {
        for (int j = 0; j < c; j ++)
        {
            brr[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < c; i ++)
    {
        for (int j = 0; j < r; j ++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}
int main ()
{
    int arr[100][100];
    int brr[100][100];
    int rows, cols;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;
    initMatrix(arr, rows, cols);
    cout << endl;
    cout << "Matrix:"<< endl;
    print(arr, rows, cols);
    cout << endl;
    cout << "Transpose:" << endl;
    transpose(arr, brr, rows, cols);
    return 0;
}
