#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<set>
#include<map>
using namespace std;
const int maxn=100000;
///int a=atoi(s.c_str());
int main() {
    int n,k;
    while(cin>>n>>k,n||k) {
        set<int>M;
        map<int,int>N;
        stringstream ss;
        M.insert(n); N[n]=0;
        string x,y;
        int a=n,b=0,i=0;
        while(1){
            M.insert(a); N[a]=i;
            ss<<a;
            ss>>y; ss.clear();
            int len=y.size();
            y+=string(k-len,'0');
            sort(y.begin(),y.end());
            x=y;
            reverse(x.begin(),x.end());
            a=atoi(x.c_str());
            b=atoi(y.c_str());
            a-=b;
            if(M.count(a)){
                cout<<N[a]<<' '<<a<<' '<<++i-N[a]<<endl;
                break;
            }
            i++;
        }
    }
    return 0;
}