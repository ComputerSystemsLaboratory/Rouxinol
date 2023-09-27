#include <iostream>
#include <algorithm>
#include <map>
typedef long long LL;
using namespace std;
int main(void){
    map<LL,LL,greater<LL> > list;
    LL n,m,d,p;
    LL total_p;
    while(cin>>n>>m,n!=0||m!=0){
        total_p=0;
        list.clear();
        for(LL i=0;i<n;i++){
            cin>>d>>p;
            list[p]+=d;
        }
        for(map<LL,LL>::iterator it=list.begin();it!=list.end();it++){
            if((*it).second>m){
                total_p+=(*it).first*((*it).second-m);
                m=0;
            }
            else{
                m-=(*it).second;
            }
        }
        cout<<total_p<<endl;
    }
    return 0;
}