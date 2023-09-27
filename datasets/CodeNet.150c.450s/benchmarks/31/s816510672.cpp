#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int R[n];
    for ( int i = 0;i < n ;i++)cin >> R[i];
    int min = R[0];
    int a = R[1]-R[0];
    for ( int i = 1;i < n ;i++){
        if(min > R[i]){ min = R[i];
        }else if(min <= R[i] && a <= R[i]-min) a = R[i]-min;
    }
    cout << a <<endl;
    
    return 0;
}