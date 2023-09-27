
#include <iostream>
#include<cmath>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    long max=-1000000000,min=1000000000;
    for(int i=0;i<n;i++){
        long a;
        cin>>a;
        if(i!=0){
        if(max<a-min)max=a-min;
        }
        if(min>a)min=a;
    }
    cout<<max<<endl;
    
    return 0;
}
