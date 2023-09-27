#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;


int main(){
    char d1[5] = {'.',',','!','?',' '};
    int n;
    while(cin >> n) {
        rep(i,n){
            string ar;
            cin >> ar;
            int cnt = 0;
            rep(j,ar.size()){
                if(ar[j + 1] != '0' && ar[j] != '0') {
                    cnt++;
                }else{
                    char c;
                    if(ar[j] == '0') continue;
                    else if(ar[j] == '1') c = d1[cnt % 5];
                    else if(ar[j] == '2') c = 'a' + (cnt % 3);
                    else if(ar[j] == '3') c = 'd' + (cnt % 3);
                    else if(ar[j] == '4') c = 'g' + (cnt % 3);
                    else if(ar[j] == '5') c = 'j' + (cnt % 3);
                    else if(ar[j] == '6') c = 'm' + (cnt % 3);
                    else if(ar[j] == '7') c = 'p' + (cnt % 4);
                    else if(ar[j] == '8') c = 't' + (cnt % 3);
                    else if(ar[j] == '9') c = 'w' + (cnt % 4);
                    cout << c;
                    cnt = 0;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

