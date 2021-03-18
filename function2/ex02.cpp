#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0;
    cout << "enter the amount of elements: ";
    cin >> n;
    cout << "\nenter the numbers: ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "\nthe sum of the elements is: " << sum;
    return 0;
}