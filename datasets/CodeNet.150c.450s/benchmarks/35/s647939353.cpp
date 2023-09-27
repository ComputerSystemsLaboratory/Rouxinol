#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        long long ALL=0;
        long long a[n],max=-500000000;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ALL += a[j];
                if(ALL>max){
                    max=ALL;
                }
            }
            ALL=0;
        }
        cout<<max<<endl;
    }
    return 0;
}