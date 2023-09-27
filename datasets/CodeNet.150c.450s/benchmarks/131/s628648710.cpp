#include <bits/stdc++.h>
using namespace std;
int next(string s) {
    string max_s=s,min_s=s;
    sort(max_s.begin(),max_s.end(),greater<int>());
    sort(min_s.begin(),min_s.end());
    return stoi(max_s)-stoi(min_s);
}
int main() {
    int a,L;
    while(scanf("%d %d",&a,&L),a!=0||L!=0) {
        map<int,int> m;
        int idx=0;
        while(1) {
            m[a]=idx++;
            string s=to_string(a);
            s=string(L-s.size(),'0')+s;
            a=next(s);
            if(m.find(a)!=m.end()) {
                printf("%d %d %d\n",m[a],a,idx-m[a]);
                break;
            }
        }
    }
}