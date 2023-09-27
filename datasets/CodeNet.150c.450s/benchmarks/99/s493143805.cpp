#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int toINT(string s){
    int ret=0;
    
    rep(i,s.size()){
        if(s[i]=='m'){
            if(i-1>=0 && isdigit(s[i-1])){
                ret+=(s[i-1]-'0')*1000;
            }
            else{
                ret+=1000;
            }
        }
        else if(s[i]=='c'){
            if(i-1>=0 && isdigit(s[i-1])){
                ret+=(s[i-1]-'0')*100;
            }
            else{
                ret+=100;
            }
        }
        else if(s[i]=='x'){
            if(i-1>=0 && isdigit(s[i-1])){
                ret+=(s[i-1]-'0')*10;
            }
            else{
                ret+=10;
            }
        }
        else if(s[i]=='i'){
            if(i-1>=0 && isdigit(s[i-1])){
                ret+=(s[i-1]-'0');
            }
            else{
                ret+=1;
            }
        }
    }
    return ret;
}


string toSTR(int a){
    string ret="";
    
    if(a/1000>1){
        ret+=(int)(a/1000)+'0';
        ret+='m';
    }
    else if(a/1000==1){
        ret+='m';
    }
    a-=(int)(a/1000)*1000;
    
    if(a/100>1){
        ret+=(int)(a/100)+'0';
        ret+='c';
    }
    else if(a/100==1){
        ret+='c';
    }
    a-=(int)(a/100)*100;
    
    if(a/10>1){
        ret+=(int)(a/10)+'0';
        ret+='x';
    }
    else if(a/10==1){
        ret+='x';
    }
    a-=(int)(a/10)*10;
    
    if(a>1){
        ret+=(int)(a)+'0';
        ret+='i';
    }
    else if(a==1){
        ret+='i';
    }
    
    
    return ret;
}


int main() {
    int n;
    cin>>n;
    
    rep(i,n){
        string a,b;
        cin>>a>>b;
        int ans=toINT(a)+toINT(b);
        cout<<toSTR(ans)<<endl;
        
    }
    
    return 0;
}