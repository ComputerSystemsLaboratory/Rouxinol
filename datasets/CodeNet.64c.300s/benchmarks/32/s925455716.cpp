#include <iostream>
using namespace std;
int main(void){
    int a,n;
    long long x=1000000,y=-1000000,z=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(x>a){
            x=a;
        }
        if(y<a){
            y=a;
        }
       z=z+a;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;

}
