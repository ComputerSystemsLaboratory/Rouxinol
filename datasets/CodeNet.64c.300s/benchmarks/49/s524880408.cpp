#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c,i;
    while (cin>>a>>b){
        c=a+b;
        for(i=1; c>=10; i++){
            c/=10;
        }
        cout<<i<<endl;
    }
    return 0;
}
