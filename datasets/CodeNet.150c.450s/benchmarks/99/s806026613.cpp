#include<bits/stdc++.h>
using namespace std;
int N;
string X,Y;
vector<int> ret;

int SI(string S){
    int len=S.size(),ans=0,t=1;
    for(int i=0;i<len;i++){
        if(S[i]=='m'){
            ans+=t*1000;
            t=1;
        }else if(S[i]=='c'){
            ans+=t*100;
            t=1;
        }else if(S[i]=='x'){
            ans+=t*10;
            t=1;
        }else if(S[i]=='i'){
            ans+=t;
            t=1;
        }else{
            t=S[i]-'0';
        }
    }
    return ans;
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>X>>Y;
        ret.push_back(SI(X)+SI(Y));
    }
    for(int i=0;i<N;i++){
        int x=ret[i]/1000;
        if(x==1)cout<<"m";
        else if (x!=0) cout<<x<<"m";
        ret[i]%=1000;

        x=ret[i]/100;
        if(x==1)cout<<"c";
        else if (x!=0) cout<<x<<"c";
        ret[i]%=100;

        x=ret[i]/10;
        if(x==1)cout<<"x";
        else if (x!=0) cout<<x<<"x";
        x=ret[i]%10;
        if(x==1)cout<<"i";
        else if (x!=0) cout<<x<<"i";

        cout<<endl;
    }
    return 0;
}
