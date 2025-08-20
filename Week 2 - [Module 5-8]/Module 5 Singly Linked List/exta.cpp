
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {3, 4, 5, 6, 7};
    cout << (int)&arr[2] << " " << (int)&arr[3];
    cout << &arr[2] << " " << &arr[3];

    return 0;
}