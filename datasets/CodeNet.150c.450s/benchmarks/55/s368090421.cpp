#include <iostream>
using namespace std;
int main(void){
    string str;
    int sum;
    while(cin >> str && str != "0"){
        sum = 0;
        for(int i=0; i<str.size(); i++){
            sum += str[i] - '0';
        }
        cout << sum << endl;
    }
}

