#include<iostream>
using namespace std;
int t, n, i, ii, ok, jj;
long long v[205], d[70][2], x;
char s[205];
int main(){
    cin>> t;
    for(; t; t--){
        cin>> n;
        for(i = 1; i <= n; i++){
            cin>> v[i];
        }
        for(ii = 0; ii < 60; ii++){
            d[ii][0] = d[ii][1] = 0;
        }
        cin>> s + 1;
        for(i = n; i >= 1; i--){
            if(s[i] == '0'){
                x = v[i];
                for(ii = 59; ii >= 0; ii--){
                    if( ( (x >> ii) & 1) == 1){
                        if(d[ii][0] != 0){
                            x ^= d[ii][0];
                        }
                        else{
                            d[ii][0] = x;
                            break;
                        }
                    }
                }
            }
            else{
                x = v[i];
                for(jj = 59; jj >= 0; jj--){
                    if(( (x >> jj) & 1) == 1){
                        x ^= d[jj][0];
                    }
                }
                if(x != 0){
                    cout<<"1\n";
                    break;
                }
            }
        }
        if(i == 0){
            cout<<"0\n";
        }
    }
}
