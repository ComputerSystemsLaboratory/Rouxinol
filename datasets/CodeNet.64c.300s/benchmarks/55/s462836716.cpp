#include<iostream>
using namespace std;
int main(){
    int cou = 1;
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        cout <<"Case"<<" "<<cou<<":"<<" "<< n<< endl;
        cou++;
    }
    return 0;
}
