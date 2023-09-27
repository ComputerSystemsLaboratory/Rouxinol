#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++) cin >> arr[i];
    for(int i = x - 1; i >= 0; i--){
        if (i != x - 1) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
