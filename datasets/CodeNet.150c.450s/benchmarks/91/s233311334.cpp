#include <iostream>
#include <cmath>
using namespace std;
int prime(int);
int main(){
    int a,sum;
    int b[999999];
    b[0]=0;
    for(int i=1;i<999999;i++){
        b[i]=prime(i+1);
    }
    while ( cin >> a){
        sum =0;
        for (int i=1;i<a;i++){
            sum +=b[i];
        }
        cout << sum << endl;
    }
}
int prime(int x){
    if(x==1)
        return 0;
    if(x==2)
        return 1;
    for (int i=2;i<=sqrt(x)+1;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}