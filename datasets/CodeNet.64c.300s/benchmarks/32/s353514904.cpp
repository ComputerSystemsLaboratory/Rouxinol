#include <iostream>
using namespace std;
int main(void){
    long long int n,a[10001]={0};
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    long long int min=1000000,max=-1000000,sum=0;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
        sum=sum+a[i];
    }
    cout <<min<<" "<<max<<" "<<sum<<endl;
}
