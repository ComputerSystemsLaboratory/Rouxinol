#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, order;
    int q, a, b;
    cin >> str >> q;
    for(int i=0; i<q; i++){
        cin >> order;
        if(order=="replace"){
            cin >> a >> b >> order;
            str.replace(a, b-a+1, order);
        }
        else if(order=="reverse"){
            cin >> a >> b;
            reverse(str.begin()+a, str.begin()+b+1);
        }
        else{
            cin >> a >> b;
            for (int j = a; j <= b; j++){
                cout << str[j];
            }
            cout << endl;
        }
    }
    return 0;
}