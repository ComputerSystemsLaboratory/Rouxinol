#include <iostream>
using namespace std;
int main(void){
    int n, a[100] = {0};
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int j = n-1; 0 < j; j--){
        cout << a[j] << " ";
    }
    cout << a[0];
    cout << endl;
}
//ITP1_6_A
