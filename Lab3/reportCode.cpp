#include<iostream>
#include<string>
using namespace std;


bool isValidIdentifier(string v) {

        bool ok =true;

        int rSpace = 32; /// SPACE
        int rSlash = 47;     /// Slash
        int rColon = 58;    /// colon
        int rAtSign = 64;   /// at sign
        int xS = 91;
        int yS = 94;
        int h = 96;
        int sf = 123;
        int ss = 126;

        int n = v.size();

        if(v[0] >= '0' && v[0] <= '9') {
            ok = false;
            cout << "\nERROR at Index : " << 0 << '\n';
            cout << "Numeric value cannot exist at 1ST Index -> " <<v[0] << '\n';
               cout << '\n';
        }

        else {
        for(int i=0;i<n;++i) {
            if((v[i] >= rSpace && v[i] <=rSlash) || (v[i] >= rColon && v[i] <= rAtSign) || (v[i] >= xS && v[i] <= yS) || (v[i]==h) || (v[i]>=sf && v[i] <=ss)) {
            ok = false;
            cout << "\nERROR! at Index : " << i << '\n';
            cout << "Symbolic value cannot exist at Index : "<< i<< " -> " << v[i] << '\n';
               cout << '\n';
            }
        }
        }


    return ok;
}

int main()
{
    string v;
    cout << "Enter Variable name : ";
    cin >> v;

    if(isValidIdentifier(v)) {
        cout << "\nVariable is correct\n";
    } else {
        cout << "Code ERROR\n";
    }

}
