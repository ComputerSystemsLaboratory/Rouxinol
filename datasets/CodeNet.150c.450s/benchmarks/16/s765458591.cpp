#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;
typedef pair<int,int> P;

int main(){
    string l;
    getline(cin,l);
    stack<int> bef;
    vector<P> ps;
    for(int i=0;i<l.size();i++){
        if(l[i]=='\\') bef.push(i);
        if(l[i]=='/' && !bef.empty()){
            ps.push_back(P(bef.top(),i));
            bef.pop();
        }
    }
    sort(begin(ps),end(ps));
    ps.push_back(P(l.size(),l.size()));
    vector<int> ls;
    int end=-1,now=0;
    for(int i=0;i<ps.size();i++){
        int nf=ps[i].first,ns=ps[i].second;
        if(nf>end){
            if(now>0) ls.push_back(now);
            now=0;
            end=ns;
        }
        now+=ns-nf;
    }
    printf("%d\n%d",accumulate(ls.begin(),ls.end(),0),ls.size());
    for(int i=0;i<ls.size();i++){
        printf(" %d",ls[i]);
    }
    printf("\n");
}