#include<iostream>
using namespace std;
int main(){
    int work[10];
    int temp;
    for(int i = 0; i < 10; i++){
        cin >> work[i];
    }
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j <= 9; j++){
            if(work[i] < work[j]){
                temp = work[i];
                work[i] = work[j];
                work[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        cout << work[i] << endl;
    }
    return 0;
}