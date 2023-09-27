#include<iostream>
using namespace std;

int main(){
    for(;;){
        int i,j,o;
        cin >> i >> j;
        if((i == 0) && (j == 0)){
            break;
        }
        if(i > j){
            o = i;
            i = j;
            j = o;
        }
        cout << i << " " << j << endl;
    }
}
