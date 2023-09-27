#include<iostream>
using namespace std;
int main() {
    int n = 0;
    int x;
    cin >> x;
    while(x>0){
        
        n+=1;
        cout << "Case " << n << ": " << x << endl;
        cin >> x;
    }
}
