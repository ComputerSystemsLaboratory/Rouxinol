#include <iostream>
using namespace std;

int GCD(int value1,int value2){
    int large,small;
    
    if(value1>=value2){
        large=value1;
        small=value2;
    }else{
        large=value2;
        small=value1;
    }
    
    if((large%small)==0){
        return small;
    }else{
        return GCD(small,large%small);
    }
}

int main(){
    int a,b,gcd,lcm;
    while(cin>>a>>b){
        gcd=GCD(a,b);
        lcm=a/gcd*b;
        cout << gcd << " " << lcm << endl;
    }
}