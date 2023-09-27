#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string num;
    int ans, digit;
    ans = 0;
    while(1){
        cin >> num;
        if(num == "0")  break;
        for (int i = 0; i < num.length(); ++i)
        {
            digit = num[i] -'0';
            ans += digit;
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}