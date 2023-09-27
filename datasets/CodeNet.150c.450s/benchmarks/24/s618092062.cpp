#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
using namespace std;


int main(){
    while(1){
    
    int n,m;
    cin>>n>>m;
    if(n==0 && m==0){break;}
    pair<int,int>a[10000];
    unsigned long long int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        swap(a[i].first,a[i].second);
        count+=a[i].first*a[i].second;
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        m-=a[i].second;
        count-=a[i].first*a[i].second;
        if(m<=0){count-=m*a[i].first; break;}
        }
        
    cout<<count<<endl;
        
    }
    
    return 0;
}
