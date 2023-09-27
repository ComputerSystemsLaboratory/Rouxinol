#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct dis{
    int d, p;
};
bool s(dis const& c,dis const&b){
    return c.p>b.p;
}
int n,m,a;
vector<dis>vec;
int main(){
    while(cin>>n>>m,n){
        vec.clear();
        a=0;
        for(int i=0;i<n;i++){
            dis d;
            cin>>d.d>>d.p;
            vec.push_back(d);
        }
        sort(vec.begin(),vec.end(),s);
        for(int i=0;i<n;i++){
            if(m<vec[i].d){
                a+=(vec[i].d-m)*vec[i].p;
            }
            m=max(0,m-vec[i].d);
        }
        cout<<a<<endl;
    }
    return 0;
}