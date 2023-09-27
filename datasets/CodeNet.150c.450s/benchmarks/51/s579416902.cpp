#include<iostream>
using namespace std;

int main(){
    int students[30];
    int n;
    for(int i=0;i<30;i++){
        students[i] = 1;
    }
    for(int i=0;i<28;i++){
        cin >> n;
        students[n-1] = 0;
    }
    for(int i=0;i<30;i++){
        if(students[i]){
            cout << i+1 << endl;
        }
    }
}