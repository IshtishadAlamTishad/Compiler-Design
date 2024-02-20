#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    char a[n];
    for(int i=0;i<n;++i) cin >> a[i];


    int i=0;
    while(a[i] != ';') {
        if(a[i+1] == ' ') {
            a[i] = ' ';
        }
        ++i;
    }
    for(int i=0;i<n;++i) {
        cout << a[i];
    }


}
