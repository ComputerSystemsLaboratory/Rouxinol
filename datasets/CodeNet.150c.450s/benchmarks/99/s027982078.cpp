#include <iostream>
#include <cmath>
using namespace std;

char dig[5]="ixcm";

int toInt(string& num){
    int ans=0,coef=1;
    for(unsigned int i=0; i<num.length(); i++){
        if('2'<=num[i] && num[i]<='9'){
            coef=num[i]-'0';
        }else{
            for(int j=0; j<4; j++){
                if(dig[j]==num[i]){
                    ans+=coef*pow(10,j);
                }
            }
            coef=1;
        }
    }
    return ans;
}           

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int ans;
        string strA,strB;
        cin >> strA >> strB;
        ans = toInt(strA) + toInt(strB);

        for(int i=3; i>=0; i--){
            int d = ans/pow(10,i);
            if(d == 0) continue;
            else if(d !=1) cout << d;
            cout << dig[i];
            ans -= d*pow(10,i);
        }
        cout << endl;
    }
    return 0;
}