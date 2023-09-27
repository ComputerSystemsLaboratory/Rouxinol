#include <iostream>
using namespace std;
int main(void){
    long long n,a,min=1000000,max=-1000000,s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>max)max=a;
        if(a<min)min=a;
        s=s+a;
    }
    cout<<min<<" "<<max<<" "<<s<<endl;
}

