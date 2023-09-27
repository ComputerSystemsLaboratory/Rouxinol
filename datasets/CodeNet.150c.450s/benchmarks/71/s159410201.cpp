#include <iostream>
#include <cmath>

using namespace std;

int comb(int a,int num){
    if(num == 1){
        return 1;
    }
    else{
        int count = 0;
        for(int i = 0; i <= min(a,9); i++){
            if(a - i <= 9*(num-1)) count = count + comb(a-i, num-1);
        }
        return count;
    }

}

int main(){
    int n,k;
    while(cin >> n){
        cout << comb(n,4) << endl;
    }

}