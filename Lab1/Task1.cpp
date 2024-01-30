#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of elements in array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter elements : ";
    for(int i=0;i<n;++i) cin >> a[i];

    double avg=0,sum=0;

    for(int i=0;i<n;++i) {
        sum+=a[i];
    }
    avg = sum/n;

    cout << "Average : " << avg << '\n';
}
