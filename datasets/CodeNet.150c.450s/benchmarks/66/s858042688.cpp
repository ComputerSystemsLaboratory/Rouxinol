#include<bits/stdc++.h>
 
using namespace std;
 
#define rep(i, n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back


int main(){
    int n,m;

    cin>>n;
    vector<string> v;


    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    cin>>m;
    int count=0;

    for(int i=0;i<m;i++){
        
        bool flag=false;
        string t;
        cin>>t;

        for(int j=0;j<v.size();j++){
            if(t==v[j]){
                flag=true;
                if(count%2==0){
                    cout<<"Opened by "<<t<<endl;
                    count++;
                    break;
                }else if(count%2==1){
                    cout<<"Closed by "<<t<<endl;
                    count++;
                    break;
                }
            }
        }
        if(!flag){
            cout<<"Unknown "<<t<<endl;
        }
    }
}