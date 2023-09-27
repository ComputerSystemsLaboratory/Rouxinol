#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        rep(i,n){
            map<string, int> word;
            string str;
            cin >> str;
            range(i,1,str.size()){
                string frontN, backN,frontR,backR;
                rep(j,i){
                    frontN+= str[j];
                }
                range(j,i, str.size()){
                    backN+= str[j];
                }
                //cout << frontN << endl << backN << endl << endl;
                for(int j = frontN.size() - 1; j >= 0; j--){
                    frontR += frontN[j];
                }
                for(int j = backN.size() - 1; j >= 0; j--){
                    backR += backN[j];
                }
                //cout <<frontR << endl << backR << endl << endl;
                word[frontN + backN] = 1;
                word[frontN + backR] = 1;
                word[frontR + backN] = 1;
                word[frontR + backR] = 1;
                word[backN + frontN] = 1;
                word[backN + frontR] = 1;
                word[backR + frontN] = 1;
                word[backR + frontR] = 1;
            }
            cout << word.size() << endl;
        }
    }
}