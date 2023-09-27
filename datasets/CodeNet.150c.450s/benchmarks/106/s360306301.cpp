#include<iostream>
using namespace std;
int main(){
    int a,b,c,i,sum;
    sum=0;
    cin >>a >>b >>c;
    for(i=a;i<=b;i++){
        if(c%i==0){
            sum++;
        }
        else{
            continue;
        }
    }
    cout << sum <<endl;
    return 0;
}
