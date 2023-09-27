#include <iostream>

using namespace std;

const int MIN=-100000;
int main(){
    int n;

    cin>>n;
    while (n){
        int sum=0,max=MIN,t;
        for (int i=0;i<n;++i){
            cin>>t;
            sum+=t;
            if (sum>max) max=sum;
            if (sum<0) sum=0;
        }
        cout<<max<<endl;
        cin>>n;
    }
    return 0;
}