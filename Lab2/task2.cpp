#include<iostream>
#include<string>
using namespace std;

int main()
{
    char pos = '+';
    char mn = '-';
    char mul = '*';
    char div = '/';
    char per = '%';
    char eql = '=';


    string s,c;
    cout << "Enter expression : ";
    cin >> s;
    int n = s.size();
    int ct=0;

    for(int i=0;i<=n;++i) {
        if(s[i] == pos) {
            ct++;
            c += pos;
        }
        else if(s[i] == mn) {
            ct++;
            c += mn;
        }
        else if(s[i] == mul) {
           ct++;
            c += mul;
        }
        else if(s[i] == div) {
            ct++;
            c += div;
        }
        else if(s[i] == per) {
            ct++;
            c += per;
        }
        else if(s[i] == eql) {
           ct++;
            c+= eql;
        }

    }
    cout << '\n';
    cout << "Total operators : " << ct << '\n';

    for(int i=0;i<ct;++i) {
        cout << "operator " << i+1 << ": ";
        cout << c[i] << '\n';
    }

// 3+4%10*12/45-10=-6
}

