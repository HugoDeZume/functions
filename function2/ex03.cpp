#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, pro = 1;
    cout << "enter the amount of elements : ";
    cin >> n;
    cout << "\nenter the numbers: ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        pro *= arr[i];
    }
    cout << "\nproduct of the numbers: " << pro;
    return 0;
}