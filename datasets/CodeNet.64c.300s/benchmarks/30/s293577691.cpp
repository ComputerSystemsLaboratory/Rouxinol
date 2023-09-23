#include <iostream>
using namespace std;

//????¬??????§?????£???????????°????±???????
int coin(int X){
    int ans = 0;
    //500
    ans = X / 500;

    //100
    ans = ans + (X % 500) / 100;

    //50
    ans = ans + ((X % 500) % 100) / 50;

    //10
    ans = ans + (((X % 500) % 100) % 50) / 10;

    //5
    ans = ans + ((((X % 500) % 100) % 50) % 10) / 5;

    //1
    ans = ans + (((((X % 500) % 100) % 50) % 10) % 5);

    return  ans;
}

int main(void){

    int i = 0;
    int ans[5];
    int input;
    while(1){
        cin >> input;
        if(input == 0){ break;}
        else{
            ans[i] = coin(1000-input);
        }
        i++;
    }

    for(int j = 0; j < i; j++){
        cout << ans[j] << endl;
    }

    return 0;
}