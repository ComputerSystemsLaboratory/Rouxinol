#include <iostream>
#include <vector>
#include <map>
typedef long long ll;
using namespace std;
ll MOD = 1e9+7;

bool check_alp(char c){
    if(c>='a' && c<='z')return true;
    else return false;
}

int main(void){
    int n;
    cin >> n;
    string p="ixcm";
    while(n--){
       string s,t;
       cin >> s >> t;
       map<char,int> mp;
       map<char,char> f;
       f['i']='x';
       f['x']='c';
       f['c']='m';
       int si=s.size(),ti=t.size();
       int i,j,k,num=1;
       for(i=0;i<si;i++){
           if(check_alp(s[i])){
               mp[s[i]]+=num;
               num=1;
           }else{
               num=s[i]-'0';
           }
       }
       for(i=0;i<ti;i++){
           if(check_alp(t[i])){
               mp[t[i]]+=num;
               num=1;
           }else{
               num=t[i]-'0';
           }
       }
       for(i=0;i<3;i++){
           if(mp[p[i]]>=10){
               mp[p[i+1]]+=mp[p[i]]/10;
               mp[p[i]]%=10;
           }
       }
       
       for(i=3;i>=0;i--){
           if(mp[p[i]]>1)cout << mp[p[i]] << p[i];
           else if(mp[p[i]]==1)cout << p[i];
       }
       cout << endl;
   }
    return 0;
}

