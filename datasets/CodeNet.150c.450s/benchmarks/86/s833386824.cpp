#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n,m,p;
    while(1){
        cin>>n>>m>>p;
        if(n==0)break;
        vector<int> x(n);
        int sum=0;
        for(int i=0;i<n;i++){
cin>>x[i];
sum+=x[i];
        }
        sum=sum*(100-p);
if(x[m-1]==0){
    cout<<"0"<<endl;
}else{       sum=sum / x[m-1];
        cout<<sum<<endl;
}
    }
    return 0;
}