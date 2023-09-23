#include <iostream>
using namespace std;
int main(void){
    int d,sum;
    while(cin>>d){
        sum=0;
        for(int i=1 ;d*i <= 600-d;i++){
            int f=d*i;
            sum += f*f*d;
        }
        cout<<sum<<endl;
    }
    return 0;
}