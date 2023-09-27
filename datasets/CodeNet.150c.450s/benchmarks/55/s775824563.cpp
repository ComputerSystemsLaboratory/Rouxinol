#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string number;
    int sum=0; //合計値計算
    while(1){
        cin >> number;
        if (number[0] == '0') {
            break;
        }
    for ( int i = 0; i < number.size(); i++ ){ // 文字列の長さだけ繰り返す
        sum += number[i]-'0'; //ASCII code、数字に戻す
        //cout << number[i]; // char型配列と同じように扱う
    }
    cout << sum << endl;
        sum = 0;
    }
    return 0;
}
