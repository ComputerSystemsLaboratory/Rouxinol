#include <iostream>

using namespace std;

int main() {

    int i = 0,j,k = 0,n,grage[100],box[100];
    
    while(cin >> n){
        box[i] = n;
        i++;
    }
    
    for(j = 0;j < i;j++){
        if(box[j] != 0){
            grage[k] = box[j];
            k++;
        }
        else {
            cout << grage[k - 1] << endl;
            k--;
        }
    }
    
    return 0;
}