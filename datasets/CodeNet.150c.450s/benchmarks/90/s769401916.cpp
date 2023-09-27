#include<iostream>
using namespace std;

int main(){
    int n;
    int nn[100];
    int max = 0;
    for(int i=0;i<100;i++){
        nn[i] = 0;
    }
    while(cin >> n){
        nn[n-1] += 1;
        if(nn[n-1] > max){
            max = nn[n-1];
        }
    }
    for(int i=0;i<100;i++){
        if(nn[i] == max){
            cout << i+1 << endl;
        }
    }
    return 0;
}