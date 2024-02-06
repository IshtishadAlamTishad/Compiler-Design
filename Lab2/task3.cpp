#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout << "Enter characters with comment line : ";
    getline(cin,s);

    cout << '\n';

    bool ok = true;
    int n = s.size();
    for(int i=0;i<n;++i) {
        if(s[i] == '*') {
            ok = false;
        }
    }

    if(ok==true) {
            cout << "Single Comment line\n";
    } else {
        cout << "Not Single Comment Line\n";
        cout << "\nMultiple lines\n";
    }
}

