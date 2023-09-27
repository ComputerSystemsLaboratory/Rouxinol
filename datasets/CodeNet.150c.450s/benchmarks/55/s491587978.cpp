#include<string>
#include<iostream>
using namespace std;

int main(void){
    string number;
    int sum;
    while(true){
        sum = 0;
        cin >> number;
        if (number[0] == '0'){
            break;
        }
        for ( int i = 0; i < number.size(); i++ ){
            sum += number[i] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}
