#include <iostream>
using namespace std;

double func(double a){
    return a*a;
}
    
int main(){
    //インテグラル計算
    double d=1;
    long long int sum=0;
    while(cin >> d){
        for(double i=0;i<=(600-d);i+=d){
            sum += d * func(i);
        }
    cout << sum << endl;
    sum =0;
    }

    return 0;
}