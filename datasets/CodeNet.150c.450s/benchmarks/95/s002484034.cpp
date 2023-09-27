#include<bits/stdc++.h>
 
using namespace std;
 
#define rep(i, n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back


int main(){
    

    int n;
    int ud=0;
    int ans=0;
    int count=0;



    while(1){
            vector<string> v;

        ans=0;
        ud=0;
            cin>>n;

        if(n==0)break;


        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }

        for(int i=0;i<v.size()-1;i++){
            string s,t;
            s=v[i];
            t=v[i+1];

            

            if(s[1]=='u'&&t[1]=='u'&&ud==0){
                ans++;
                ud=1;
                i++;
            }else if(s[1]=='d'&&t[1]=='d'&&ud==1){
                ans++;
                ud=0;
                i++;
            }

            // cout<<s<<" "<<t<<" "<<ud<<" "<<ans<<endl;


        }

        cout<<ans<<endl;

    }
}