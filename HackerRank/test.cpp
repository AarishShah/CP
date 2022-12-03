#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hlo";
}

int fun()
{
    int d; // d is number of shifts
    int temp;
    for (int i = 1; i == d; i++)
    {
        temp = a[n]; // temp stores nth(last) element of the array
        while (n != 1)
        {
            a[n] = a[n - 1];
            n = n - 1;
        }
        a[0] = temp;
    }
}