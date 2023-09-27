#include <iostream>
using namespace std;

int main(void){
    char input[1001];
    int sum;
    int i;
    
    while(cin >> input){
//    cout << input << endl;
    if(input[0] == '0' && input[1] == '\0') break;
    
    sum = 0;
    for(i = 0; input[i] != '\0'; i++){
        sum += static_cast<int>(input[i] - '0');
    }
    
    cout << sum << endl;
    }
    return 0;
}