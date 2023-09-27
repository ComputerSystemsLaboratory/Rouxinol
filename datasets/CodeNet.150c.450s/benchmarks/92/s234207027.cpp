#include <iostream>

using namespace std;

int main() {
    int n1,n2,count,check;

    while(1){
        cin >> n1 >> n2;
        if(cin.eof()){
            break;
        }
        count = 1;
        check = n1 + n2;
        while(1){
            check /= 10;
            if(check == 0){
                cout << count << endl;
                break;
            }
            else {
                count++;
            }
        }
    }

    return 0;
}