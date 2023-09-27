#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin>>n,n) {
        bool lu=0,ru=0,up=0;
        int ans=0;
        for(int i=0;i<n;i++) {
           string f;
           cin>>f;
           if(f=="lu") {
                lu=1;
                if(ru) {
                    if(!up) {ans++;up=1;}
                }
           }else if(f=="ru") {
                ru=1;
                if(lu) {
                    if(!up) {ans++;up=1;}
                }
           }else if(f=="ld") {
                lu=0;
                if(!ru) {
                    if(up) {ans++;up=0;}
                }
           }else {
                ru=0;
                if(!lu) {
                    if(up) {ans++;up=0;}
                }
           }
        }
        printf("%d\n",ans);
    }
}