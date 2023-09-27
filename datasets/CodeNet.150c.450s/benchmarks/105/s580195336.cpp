#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int j=0; j<t; j++){
        int n;
        cin >> n;

        vector<long long int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        string s;
        cin >> s;

        /* solve */
        bool flag = true;
        vector<long long int> xor_basis;

        for(int i=n-1; i>=0; i--){
            long long int b = a[i];

            for(long long int xb : xor_basis){
                b = min(b, b ^ xb);
            }

            if(b != 0){// b cannot be represented via already-existing bases
                if(s[i] == '0') xor_basis.push_back(b);
                if(s[i] == '1'){ flag = false; break; }
            }
        }
        if(flag == true)  cout << 0 << endl;
        if(flag == false) cout << 1 << endl;
    }
    return 0;
}