#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of words in first Name : ";
    cin >>n;
    char f[n];
    cout << "Enter first Name : ";
    for(int i=0;i<n;++i) cin >> f[i];

    int m;
    cout << "Enter number of words in last Name : ";
    cin >> m;
    char l[m];
    cout << "Enter last Name : ";
    for(int i=0;i<m;++i) cin >> l[i];

    char x = ' ';

    stack<char> st;

    for(int i=m-1;i>=0;--i) {
        st.push(l[i]);
    }

    st.push(x);

    for(int i=n-1;i>=0;--i) {
        st.push(f[i]);
    }

    cout << "\nYour Name is : ";
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }

}

