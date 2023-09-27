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
typedef long long int ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back

string solve(string s){
    sort(s.begin(),s.end());
    string a=s;
    string b="";
    for(int i=s.size()-1;i>=0;i--)b+=s[i];
    
    int res=stoi(b)-stoi(a);
    return to_string(res);
}


int main(){
    string s;
    int l;
    while(cin>>s>>l){
        if(s=="0" && l==0)break;
        string tmp="";
        for(int i=0;i<l-s.size();i++)tmp+='0';
        s=tmp+s;
        
        string data[50]={};
        data[0]=s;
        
        for(int i=1;i<30;i++){
            s=solve(s);
            data[i]=s;
            rep(j,i){
                if(data[j]==data[i]){
                    cout<<j<<" "<<s<<" "<<i-j<<endl;
                    goto end;

                }
            }
            string tmp="";
            for(int i=0;i<l-s.size();i++)tmp+='0';
            s=tmp+s;

        }
    end:;
        
    }
    return 0;
}