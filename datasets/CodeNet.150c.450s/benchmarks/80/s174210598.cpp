#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum1=0,sum2=0,x;
    for(int i=0;i<4;i++){
        cin >> x;
        sum1 += x;
    }
    for(int i=0;i<4;i++){
        cin >> x;
        sum2 += x;
    }
    if(sum1>sum2)   cout << sum1 << "\n";
    else    cout << sum2 << "\n";
    return 0;
}