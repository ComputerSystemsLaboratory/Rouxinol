#include <iostream>
#include <string>
using namespace std;
int main(void){
    string num, sub;
    int m, h;
    while(cin >> num){
    if(num == "-") break;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> h;
        sub = num.substr(0, h);
        num = num.erase(0, h);
        num += sub;
    }
    cout << num << endl;
    }
    return 0;
    
}

