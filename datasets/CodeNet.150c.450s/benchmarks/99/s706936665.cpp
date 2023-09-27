#include<vector>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007LL;
const ll INF=1000000000LL;
const int MAX=100001;
int ch(char c){
    if(c=='m'){
        return 1000;
    }else if(c=='c'){
        return 100;
    }else if(c=='x'){
        return 10;
    }else{
        return 1;
    }
}
int mcxi(string s){
    int ret=0;
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            if(st.empty()){
                ret+=ch(s[i]);
            }else{
                int a=st.top();st.pop();
                ret+=a*ch(s[i]);
            }
        }else{
            st.push(s[i]-'0');
        }
    }
    return ret;
}
string tomcxi(int s,int w){
    string ret="";
    if(s/w){
        if(s/w>1){
            char p='0'+(s/w);
            ret.push_back(p);
        }
        char c;
        switch(w){
            case 1000:c='m';break;
            case 100:c='c';break;
            case 10:c='x';break;
            case 1:c='i';break;
        }
        ret.push_back(c);
    }
    return ret;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        int sum=mcxi(s1)+mcxi(s2);
        cout<<tomcxi(sum,1000);sum%=1000;
        cout<<tomcxi(sum,100);sum%=100;
        cout<<tomcxi(sum,10);sum%=10;
        cout<<tomcxi(sum,1);
        cout<<endl;
    }
}

                           

