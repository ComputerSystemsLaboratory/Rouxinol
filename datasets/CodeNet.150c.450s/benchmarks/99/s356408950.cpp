#include <bits/stdc++.h>
using namespace std;
static const int M = 1000;
static const int C = 100;
static const int X = 10;
static const int I = 1;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s1,s2;
        cin>>s1>>s2;
        stack<int> dat1;
        stack<int> dat2;
        int sum1 = 0;
        int sum2 = 0;
        int ans = 0;

        for(int j=0; j<s1.size(); j++){
            int v;
            if(s1[j] == 'm' || s1[j] == 'c'
                || s1[j] == 'x' || s1[j] == 'i'){
                    if( ! dat1.empty()){
                        v = dat1.top();  
                        dat1.pop();
                    }
                    else v = 1;

                    if(s1[j] == 'm') sum1 += M*v;
                    else if(s1[j] == 'c') sum1 += C*v;
                    else if(s1[j] == 'x') sum1 += X*v;
                    else if(s1[j] == 'i') sum1 += I*v;          
            }
            else {
                v = atoi(&s1[j]);
                dat1.push(v);
            }
        }

        for(int j=0; j<s2.size(); j++){
            int v;
            if(s2[j] == 'm' || s2[j] == 'c'
                || s2[j] == 'x' || s2[j] == 'i'){
                    if(!dat2.empty()){
                        v = dat2.top();
                        dat2.pop();
                    }    
                    else v = 1;           
                    if(s2[j] == 'm') sum2 += M*v;
                    else if(s2[j] == 'c') sum2 += C*v;
                    else if(s2[j] == 'x') sum2 += X*v;
                    else if(s2[j] == 'i') sum2 += I*v;          
            }
            else {
                v = atoi(&s2[j]);
                dat2.push(v);
            }
        } 

        ans = sum1+sum2;
        string res = "";
        int div = 1000,cnt=1000;

        while(1){
            if(cnt == 0){
                break;
            }
            int v = ans/cnt;
            ans -= v*cnt;
            if(res.size() == 0 && v == 0){
                cnt /= 10;
                continue;
            }
            else {
                if(v != 1 && v != 0){
                    char c;
                    c = v+'0';
                    res += c;
                }
                
                if(cnt == M && v != 0) res += ('m');
                else if(cnt == C && v != 0) res += ('c');
                else if(cnt == X && v != 0) res += ('x');
                else if(cnt == I && v != 0) res += ('i');
            }

            cnt /= 10;
        }

        cout<<res<<endl;
    }

    return 0;
}
