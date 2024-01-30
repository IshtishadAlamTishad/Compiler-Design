#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int a[n];
    cout << "Enter elements : ";
    for(int i=0;i<n;++i) cin >> a[i];

    int mx=a[0],mn = a[0];

    for(int i=0;i<n;++i) {
        if(a[i] <= mn) {
            mn = a[i];
        }
    }

    for(int i=0;i<n;++i) {
        if(a[i] >= mx) {
            mx = a[i];
        }
    }
    cout << "Max element : " << mx << '\n';
    cout << "Min element : " << mn << '\n';

}

