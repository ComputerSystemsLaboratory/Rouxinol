#include<iostream>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        int sum = a + b;
        int result = 0;
        while (true) {
            sum = sum / 10;
            result++;
            if (sum == 0) {
                cout << result << endl;
                break;
            }
        }
    }
    return 0;
}