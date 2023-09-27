#include<iostream>
using namespace std;
int main(){
    int i = 0;
    int x = 0;
    while(1){
        i++;
        cin >> x;
        if(x == 0){
            break;
        }
        cout << "Case " << i << ": " << x << endl;
        
    }
}
