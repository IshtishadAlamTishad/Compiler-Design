#include<iostream>
#include<string>
using namespace std;

int main()
{
    char x = 'a';
    char y = 'z';
    char X = 'A';
    char Y = 'Z';

    int ra = (int) x;
    int rz = (int) y;
    int rA = (int) X;
    int rZ = (int) Y;

    string s;
    cout << "Enter numbers : ";
    cin >> s;


    bool ok = false;
    for(int i=0;i<s.size();++i) {
        if((s[i] >= ra && s[i] <= rz) || (s[i] >=rA && s[i] <=rZ)) {
            ok = true;
        }
    }

    cout << '\n';
    if(ok == true) {
        cout << s << " is not Numeric Constant \n";
    } else {
        cout << s << " is Numeric Constant\n";
    }


    /*
        97 a
        122 z
        65 A
        90 Z
    */
}
