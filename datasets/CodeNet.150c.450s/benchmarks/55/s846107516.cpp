#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main() {
    string num;
    
    while(cin >> num){
        if(num == "0"){
            break;
        }else{
            int sum = 0;
    for(int i = 0; i < num.length(); i++){
        sum = (num[i] - '0') + sum;
    }
            cout << sum << endl;
        }
    }
	return 0;
}