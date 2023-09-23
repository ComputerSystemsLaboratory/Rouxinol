#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int work[n];
    for(int i = 0; i < n; i++){
	cin >> work[i];
    }
    for(int i = n - 1; i >= 0; i--){
        cout << work[i];
        if(i != 0){
            cout << " ";
	}
    }
    cout << endl;
    return 0;
}