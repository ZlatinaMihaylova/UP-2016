#include <iostream>
using namespace std;
void Delete(char *arr, int br1, int br2)
{
    br1 = 0;
    br2 = 0;
    for (int i = 0; arr[i] != '\0'; i ++)
    {
        br1++;
    }
    for (int i = 0; arr[i] != '\0'; i ++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'y' || arr[i] == 'u' || arr[i] == 'i' || arr[i] == 'o' )
        {
            for (int j = i; arr[j] != '\0'; j++)
            {
                arr[j] = arr[j+1];
            }
            br2++;
        }
    }
}
void print(char *arr, int br1, int br2)
{
    for (int i = 0; i != br1 - br2; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    char arr[100];
    cin >> arr;
    int br1=0, br2=0;
    Delete(arr, br1, br2);
    print(arr, br1, br2);
    return 0;
}
