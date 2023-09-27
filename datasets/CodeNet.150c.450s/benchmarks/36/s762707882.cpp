#include<iostream>
using namespace std;

int main(){
    int d;
    while(cin>>d){
        int S=0;
        for(const int D=d; d<600; d+=D){
            S += d*d*D;
        }
        cout << S <<endl;
    }
    return 0;
}