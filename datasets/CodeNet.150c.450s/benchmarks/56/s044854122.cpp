#include<iostream>
using namespace std;
int main(){
    int n,max,min;
    long long sum=0;
    int a[10001];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum=sum+a[i];
        if(i==1){
            max=a[i];
            min=a[i];
        }
        else{
            if(max<a[i]){
                max=a[i];
            }
            if(min>a[i]){
                min=a[i];
            }
        }
    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
}
