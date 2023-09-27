#include<iostream>
using namespace std;

int main(){
    int data[10000];
    
    for(int i = 1; i <= 10000; i++){
        cin >> data[i];
        if(data[i] == 0) break;
    }
    
    for(int i = 1; data[i] != 0; i++){
        cout << "Case" << " " << i << ":" << " " << data[i] << endl;
    }
    return 0;
}
