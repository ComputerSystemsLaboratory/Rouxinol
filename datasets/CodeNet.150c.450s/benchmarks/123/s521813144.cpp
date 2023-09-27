#include <math.h>
#include <iostream>
using namespace std;

bool is_prime(int num){
    if (num==2)
        return true;
    if(num < 2 || num%2==0)
        return false;
    for(int i =3;i<=sqrt(num);i+=2){
        if (num%i ==0)
            return false;
    }
    return true;
}



int main(){
    int N;
    int count = 0;
    cin>>N;
    int num;
    for(int i=0;i<N;i++){
        cin>>num;
        if(is_prime(num))
            count++;
    }
    cout<<count<<endl;
    return 0;
}