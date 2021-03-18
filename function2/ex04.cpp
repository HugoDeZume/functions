#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char s1[100], c = 'a';
    int n = 0, i = 0;

    cout << "\n\nenter string: ";
    cin >> s1;

    while (c != '\0')
    {
        c = s1[i];
        i++;
    }
    n = i - 1;

    char s2[i];

    i = 0;
    
    while (i != n + 1)
    {
        s2[i] = s1[n - i - 1];
        i++;
    }

    cout << "\n\nthe string \"" << s1 << "\"reversed is: \"" << s2 << "\"\n\n\n";

    return 0;
}