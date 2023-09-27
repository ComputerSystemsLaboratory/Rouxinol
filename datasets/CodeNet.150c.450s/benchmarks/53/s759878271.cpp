#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << n << ":";
    int fr=2;
    int lim=sqrt(n)+1;
    while(fr<=lim){
        if(n%fr==0){
            cout << " " << fr;
            n/=fr;
        }
        else{
            if(fr==2) fr++;
            else{
                fr+=2;
            }
        }
    }
    if(n==1){
        cout << endl;
    }
    else{
        cout << " " << n << endl;
    }
    return 0;
}
