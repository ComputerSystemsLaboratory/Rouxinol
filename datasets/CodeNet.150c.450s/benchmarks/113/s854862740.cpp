#include <iostream>

using namespace std;

int main(){
    int num;
    int i =1;
    while(1){
        cin >> num;
        
        if (num==0){
            return 0;
        }
        cout << "Case " << i++ << ": " << num << endl;
    }
    return 0;
}