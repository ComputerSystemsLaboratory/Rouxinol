#include<iostream>
using namespace std;

int main(){
    int i, n, x;
    bool check;
    cin >> n;
    for(i = 1; i <= n; i++){
        check = false;
        if(i % 3 == 0){ check = true; }
        else{
            x = i;
            while(x){
                if(x % 10 == 3) check = true;
                x = x / 10;
            };
        }
        if(check) cout << " " << i;
    }
    cout << endl;
    return 0;
}
