#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int a[10];
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    
    sort(a, a + 10,greater<int>());
    
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;

}