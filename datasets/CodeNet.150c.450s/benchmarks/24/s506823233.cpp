#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int n,m;
    while(cin>>n>>m&&!(n==0&&m==0)){
        int sum=0;
        vector<pair<int,int> > vpii;
        for(int i = 0; i < n; i++){
            int d,p;
            cin>>d>>p;
            sum+=d;
            vpii.push_back(make_pair(p,d));
        }
        sort(vpii.begin(),vpii.end(),greater<pair<int,int> > ());
        if(sum<=m)
            cout<<0<<endl;
        else{
            int idx=0;
            while(1){
                if(vpii[idx].second<m){
                    m-=vpii[idx].second;
                    vpii[idx].second=0;
                    idx++;
                }
                else{
                    vpii[idx].second-=m;
                    break;
                }
            }
            int sumExp=0;
            for(int i = 0; i < vpii.size(); i++){
                sumExp+=vpii[i].first*vpii[i].second;
            }
            cout<<sumExp<<endl;
        }
    }

    return 0;
}