#include<iostream>
using namespace std;

int main(){
    int n,R[200000],min;
    int answer = -999999999;
    cin >> n;
    for ( int i = 0; i < n; i++ ) cin >> R[i];
    min = R[0];
    for ( int i = 1; i < n; i++ ){
        if(min>R[i]){
            if(answer < R[i] - min)answer = R[i] - min;
            min = R[i];
        }else if(min<=R[i]){
            if(answer < R[i] - min)answer = R[i] - min;
        }
    }
    cout << answer << endl;
    
    return 0;
}