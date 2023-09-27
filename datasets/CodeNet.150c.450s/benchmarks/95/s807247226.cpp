#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        string s[n];
        bool d=true;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int cnt=0;
        for(int i=0;i<n-1;){
            if(d){
                if(s[i][1]=='u' && s[i+1][1]=='u'){
                    d=false;
                    cnt++;
                    i+=2;
                    continue;
                }
                else{
                    i++;
                    continue;
                }
            }
            else {
                if(s[i][1]=='d' && s[i+1][1]=='d'){
                    d=true;
                    cnt++;
                    i+=2;
                    continue;
                }
                else {
                    i++;
                    continue;
                }
            }
        }
        cout<<cnt<<endl;

    }
    
}
