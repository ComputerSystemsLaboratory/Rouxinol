#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    while(cin>>n>>m,n){
    vector<int> h(n);
    vector<int> w(m);
    for(int i=0;i<n;i++)
        cin>>h[i];
    for(int i=0;i<m;i++)
        cin>>w[i];

    vector<int> hp;
    vector<int> wp;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=h[j];
            hp.push_back(sum);
        }
    }

    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=i;j<m;j++){
            sum+=w[j];
            wp.push_back(sum);
        }
    }

    sort(hp.begin(),hp.end());
    sort(wp.begin(),wp.end());

    int res=0;

    for(int i=0;i<hp.size();i++){
        res+=distance(lower_bound(wp.begin(),wp.end(),hp[i]),upper_bound(wp.begin(),wp.end(),hp[i]));


    }
    cout<<res<<endl;
    }
    return 0;

}