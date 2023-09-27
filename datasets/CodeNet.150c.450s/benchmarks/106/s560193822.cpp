#include <iostream>
#include <vector>
using namespace std;


int main(){
    int i,j,k;
    cin >> i >> j >> k;
    int s = 0;
    for(int tmp = i; tmp <= j; tmp++){
        if(k %  tmp == 0){
            s ++;
        }
    }
    cout << s << endl;
    return 0;
}
