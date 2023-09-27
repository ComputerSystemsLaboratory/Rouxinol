#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,m,d,p;
    while (cin>>n>>m) {
        if (n==0&&m==0) {
            break;
        } else {
            std::multimap<int, int,greater<int>> map;
            for (int i=0;i<n;i++) {
                cin>>d>>p;
                map.insert(make_pair(p,d));
            }
            int sum=0;
            for (auto itr=map.begin();itr!=map.end();itr++) {
                int tmp=itr->second;
                //cout<<m<<" "<<tmp<<endl;
                if (m!=0&&tmp<m) {
                    m-=itr->second;
                } else if (m!=0&&tmp>m) {
                    tmp-=m;
                    m=0;
                    sum+=tmp*itr->first;
                } else if (m==0) {
                    sum+=tmp*itr->first;
                }
            }
            cout<<sum<<endl;
        }
    }
}
