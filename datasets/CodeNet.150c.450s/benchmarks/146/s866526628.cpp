#include<iostream>
#include <complex>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        pair<double,double>a[4];
        for(int i=0;i<4;i++){
            cin>>a[i].first>>a[i].second;
        }
        if(abs((a[1].first-a[0].first)*(a[3].second-a[2].second)-(a[3].first-a[2].first)*(a[1].second-a[0].second))<1e-10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}