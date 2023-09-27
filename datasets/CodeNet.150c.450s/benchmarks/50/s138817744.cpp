#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int i,cost,coin;
    cin>>cost;
    while(cost!=0){
        coin=0;
        cost=1000-cost;
        coin+=cost/500;
        cost%=500;
        coin+=cost/100;
        cost%=100;
        coin+=cost/50;
        cost%=50;
        coin+=cost/10;
        cost%=10;
        coin+=cost/5;
        cost%=5;
        coin+=cost;
        cout<<coin<<endl;
        cin>>cost;
    }
}