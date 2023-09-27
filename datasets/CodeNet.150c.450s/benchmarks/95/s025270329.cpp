#include <bits/stdc++.h>
using namespace std;


int main(){
    
    while(true){
        int n;
        cin>>n;
        if(n==0) return 0;
        int now=0;
        int cnt=0;
        int r=0,l=0;
        while(n--){
            string s;
            cin>>s;
            if(s=="ru") r=1;
            if(s=="rd") r=0;
            if(s=="lu") l=1;
            if(s=="ld") l=0;

            if(now==0 && r==1 && l==1){
                cnt++;
                now=1;
            }else if(now==1 && r==0 && l==0){
                cnt++;
                now=0;
            }
        }
        cout<<cnt<<endl;
    }
}

