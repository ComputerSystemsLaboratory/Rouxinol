#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        vector<string> a(n);
        rep(i,n)cin >> a[i];
        bool f = 0;
        int l = 0,r=0;
        int c = 0;
        rep(i,n){
            if(a[i]=="lu"){
                l = 1;
                if(l==1&&r==1&&!f){
                    f = 1;
                    c++;
                }
            }else if(a[i]=="ru"){
                r = 1;
                if(l==1&&r==1&&!f){
                    f = 1;
                    c++;
                }
            }else if(a[i]=="ld"){
                l = 0;
                if(l==0&&r==0&&f){
                    f = 0;
                    c++;
                }
            }else{
                r = 0;
                if(l==0&&r==0&&f){
                    f = 0;
                    c++;
                }
            }
        }
        cout << c << "\n";
    }
    return 0;
}

