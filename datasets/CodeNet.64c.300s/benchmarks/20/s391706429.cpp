#include<iostream>
using namespace std;
int main(){
    long long int d,num=0;
    while(cin >> d){
        num = 0;
        for(int i=d;i<600;i+=d){
            num+=i*i*d;
        }
        cout << num << endl;
    }
    return 0;
}