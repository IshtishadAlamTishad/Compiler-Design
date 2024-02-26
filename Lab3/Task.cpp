#include<iostream>
#include<string>
using namespace std;


struct Keys {
    string a[100][100] = {
        {"int","double","char","bool","string","float","long long","long long int","short","long","main","int32_t"},
        {"using","namespace","default","const","delete","continue","class","asm","operator","private","public","protected","new","enum","struct","inline","typedef","union"},
        {"for","while","do","switch","auto","break","friend","if","else if","else","static","void","volatile","goto","register","return","sizeof","virtual","template",},
        {"vector","map","set","ordered_set","binary_search","bitset","upper_bound","lower_bound","try","catch","throw","deque","max","min","*max_element","*min_element"}
    };

};


bool isValidIdentifier(string v) {


       Keys key;


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

        for(int i=0;i<100;++i) {
         for(int j=0;j<100;++j) {
         if(key.a[i][j] == v) {
            ok = false;
            cout <<"\nInvalid!\n";
            cout <<"Variable cannot be a datatype -> " << v << '\n';
            cout << '\n';
        }
        }
        }

        if(v[0] >= '0' && v[0] <= '9') {
            ok = false;
            cout << "\nERROR at Index : " << 0 << '\n';
            cout << "Numeric value cannot exist at 1ST Index -> " <<v[0] << '\n';
               cout << '\n';
        }

        else {
        for(int i=0;i<v.size();++i) {
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

    freopen("input.txt","r",stdin);
    int t;
    cin >> t;
    while(t--) {

    if(isValidIdentifier(v)) {
        cout << "\nVariable is correct\n";
    } else {
        cout << "Code ERROR\n";
    }

    cout << "\nEnter Variable name : ";
    }
}
