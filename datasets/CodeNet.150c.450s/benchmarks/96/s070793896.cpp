#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
 
string keitai[]{".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int main(){
	int n;cin>>n;
    string s;
    rep(j,n){
		cin>>s;
        int cnt=0;
        string ans;
        rep(i,s.size()){
            if(s[i]=='0'){
                if(cnt)ans+=keitai[s[i-1]-'1'][(cnt-1)%keitai[s[i-1]-'1'].size()];
                cnt=0;
            }
            else cnt++;
        }
        if(ans!="")cout<<ans<<endl;
    }
}