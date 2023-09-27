#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int P[10010];
void init(int N){
    for(int i=0;i<=N;i++)
        P[i] = i;
}
int root(int a){
    if(P[a]==a)
        return a;
    return(P[a] = root(P[a]));
}
bool is_same_set(int a, int b){
    return root(a) == root(b);
}
void unit(int a, int b){
    P[root(a)] = root(b);
}

int main(){
    int n; cin >> n;
    pair<int, pair<int,int> > a;
    vector< pair<int, pair<int,int> > > e;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x; cin >> x;
            if(x!=-1){
                e.push_back(make_pair(x, make_pair(i,j)));
            }
        }
    }
    sort(e.begin(),e.end());
    int ans = 0;
    init(n);
    for(vector< pair<int, pair<int,int> > >::iterator it = e.begin();it != e.end();it++){
        int s = it->second.first;
        int g = it->second.second;
        if(!is_same_set(s,g)){
            unit(s,g);
            ans += it->first;
        }
    }
    cout << ans << endl;
}