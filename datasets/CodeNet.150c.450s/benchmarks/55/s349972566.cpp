#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    while(1){
        int sum = 0;
        string n;
        cin >> n;
        if(n == "0"){
            break;
        }
        for(int i=0;i<n.length();i++){
            sum += int(n[i]-'0');
        }
        cout << sum << endl;   
    }
}

