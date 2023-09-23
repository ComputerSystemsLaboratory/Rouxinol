#include<iostream>
using namespace std;
int main(){
    int x;
    int n = 1;
    int i = 0;
    while(n == 1){
        i += 1;
        cin >> x;
        if(x == 0) break;
        cout << "Case " << i << ": " << x << endl;
        
    }
    return 0;
}
