#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a[1001];
    int n,m,p;
    while(cin>>n>>m>>p&&!(n==0&&m==0&&p==0)){
        int sum=0;
        m--;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum*(100-p);
        if(a[m]==0)
            cout<<0<<endl;
        else{
            cout<<sum/a[m]<<endl;
        }
    }

    return 0;
}