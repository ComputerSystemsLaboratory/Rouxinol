#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3, temp;
    cin >> num1 >> num2 >> num3;
    for(int i = 0; i < 2; ++i){
        if(num1 > num2){
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if(num2 > num3){
            temp = num2;
            num2 = num3;
            num3 = temp;
        }
    }
    cout << num1 << " " << num2 << " " << num3 << endl;
}