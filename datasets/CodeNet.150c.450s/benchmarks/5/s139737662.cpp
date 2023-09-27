#include <iostream>
using namespace std;
int main(void){
    int n,i,k;
    cin >> n;
    int day[n];
    for(i=0;i<n;i++){
    cin >> day[i+1];
    }cout << day [n]; 
    for(k=1;k<n;k++){
        cout << " ";
        cout << day[n-k];
    }
    cout << endl;
}

