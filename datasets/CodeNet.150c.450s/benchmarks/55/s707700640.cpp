#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;
    int num;
    getline(cin,number);
    while(number != "0"){
        int sum = 0;
        for(int i = 0 ;i < number.length() ;i++){
            num = number[i] - '0';
            sum += num;
        }
        cout << sum << endl;
        getline(cin,number);
    }
    
    return 0;
}