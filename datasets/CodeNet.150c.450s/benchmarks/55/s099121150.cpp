#include <bits/stdc++.h>

using namespace std;

int main() {
    // insert code here...＃
    string numbers;
    int a=0;
    while (true) {
        a=0;
        cin>>numbers;
        if(numbers=="0")break;
        for (int i=0; i<numbers.length(); i++) {
            a+=int(numbers[i])-48;
        }
        cout<<a<<endl;
    }
    
    return 0;
}
