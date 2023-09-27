#include <iostream>
using namespace std;

int main(){
    int submit[31]={0};
    int submiter;
    for(int i=0;i<28;i++){
        cin >> submiter;
        submit[submiter] = 1;
    }
    for(int i=1;i<31;i++){
        if(submit[i] == 0){
            cout << i << endl;
        }
    }
}