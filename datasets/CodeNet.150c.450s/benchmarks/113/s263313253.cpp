#include<iostream>
using namespace std;

int main(){
    for(int i = 1;;i++){
        int j;
        cin >> j;
        if (j == 0){
            break;
        }
        cout << "Case " << i << ": " << j << endl;
        
    }
}
