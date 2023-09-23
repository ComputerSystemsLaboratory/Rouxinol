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
    if(x==2 || x==3 || x==5 || x==7)
        return 1;
    if(x%2==0 || x%3==0)
        return 0;
    for (int i=5;i<=sqrt(x)+1;i+=6){
        if(x%i==0 || x%(i+2)==0)
            return 0;
    }
    return 1;
}