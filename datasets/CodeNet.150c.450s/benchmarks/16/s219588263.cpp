#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    string S;
    cin >> S;
    int height[20001], max_h[20001];
    height[0]=max_h[0]=0;
    for(int i=1;i<=S.size();i++){
        int d;
        if(S[i-1]=='_') d=0;
        else if(S[i-1]=='/') d=1;
        else d=-1;

        height[i]=height[i-1]+d;
        max_h[i]=max(max_h[i-1], height[i]);
    }
    stack<int> L;
    int k=0;
    int A=0;
    int dbl_s = 0;
    int level=-1000000;
    for(int i=S.size()-1;i>=0;i--){
        if(level==-1000000){
            if(S[i]=='/'){
                int l = -1;
                for(int j=i-1;j>=0;j--){
                    if(S[j]=='\\'){
                        l=j;
                        break;
                    }
                }
                if(l==-1) break;
                level=min(max_h[l], height[i+1]);
                if(height[i]<level) dbl_s = 1;
                else dbl_s = 0;
            }
        }else{
            if(S[i]=='/'){
                if(height[i]<level) dbl_s += (level-height[i])*2-1;
            }else if(S[i]=='_'){
                if(height[i]<level) dbl_s += (level-height[i])*2;
            }else{
                if(height[i+1]<level) dbl_s += (level-height[i])*2+1;
                if(height[i]==level){
                    L.push(dbl_s/2);
                    A += dbl_s/2;
                    k++;

                    level=-1000000;
                    dbl_s=0;
                }
            }
        }
    }

    cout << A << endl << k;
    while(!L.empty()){
        int l = L.top();
        L.pop();
        cout << ' ' << l;
    }
    cout << endl;
    
    return 0;
}
