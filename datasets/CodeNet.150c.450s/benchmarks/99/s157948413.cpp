#include<iostream>
#include<math.h>
#include<algorithm>
#include<utility>
#include<queue>
#include<string.h>
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;
typedef long long LL;
typedef pair<char, int> P;
int N;
string s1,s2;
int Decode(string s){
    int tmp=0;
    int ans=0;
    map<char,int> rate;
    rate['m']=1000;
    rate['c']=100;
    rate['x']=10;
    rate['i']=1;
    int scene=0;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            if(tmp==i){
                ans+=rate[s[i]];
            }else{
                ans+=rate[s[i]]*stoi(s.substr(tmp,i-tmp));
            }
            tmp=i+1;
        }
    }
    return ans;
}
string Encode(int n){
    string ans;
    int t[4]={1000,100,10,1};
    char c[4]={'m','c','x','i'};
    for(int i=0;i<4;i++){
        int a=n/t[i];
        n%=t[i];
        if(a>=1){
            if(a>=2)ans+=to_string(a);
            ans+=c[i];
        }
    }
    return ans;
}
int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>s1>>s2;
        cout<<Encode(Decode(s1)+Decode(s2))<<endl;
    }
    
    return 0;
}
