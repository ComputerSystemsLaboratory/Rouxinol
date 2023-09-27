#include <bits/stdc++.h>
using namespace std;

int main(){

    while(1){

    int n; cin>>n;

    if(n==0) break;

    vector<string> s(n);

    for(int i=0; i<n; i++) cin>>s[i];

    int l=0,r=0,count=0;

    for(int i=1; i<=n; i++){

        if( s[i-1] == "lu" ) l++;

        else if(s[i-1] == "ru") r++;

        else if(s[i-1] == "ld") l--;

        else if(s[i-1] =="rd") r--; 

        if( l == 1 && r == 1){
             count++;
             l = 0; 
             r = 0;
        }

        if( l == -1 && r == -1){
             count++;
             l = 0; 
             r = 0;
        }

    }

    cout<<count<<endl;
    }

    return 0;

}
