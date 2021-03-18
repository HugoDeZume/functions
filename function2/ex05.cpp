#include <iostream>
using namespace std;

int main()
{
    int n;
    int factorial = 1;

    cout << "type a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "the number must be larger than 0";
    else {
        for(int i = 1; i <=n; ++i) {
            factorial *= i;
        }
        cout << "the factorial of " << n << " is = " << factorial;    
    }

    return 0;
}