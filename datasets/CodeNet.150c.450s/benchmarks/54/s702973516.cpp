#include<iostream>
#include<string>
using namespace std;

int main(){
    string w,t; cin>>w;

    int ans=0;
    while(1){
        cin>>t;
        if(t=="END_OF_TEXT")break;

        for(int i=0;i<t.size();i++){
            if('A'<=t[i] && t[i]<='Z')t[i]+=32;
        }
        if(t==w)ans++;
    }


    cout<<ans<<endl;
    return 0;
}
