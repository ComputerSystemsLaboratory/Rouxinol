#include<iostream>
using namespace std;

int main(void){
    int i;
    int num;
    int tmp;
    cin >> num;
    for (i = 1; i <= num; i++){
        tmp = i;
        if (i % 3 == 0 && !(i == 0)){
            cout << " " << i; 
        }
        else {
            while(tmp > 0){
                if (tmp%10 == 3){
                    cout << " " << i;
                    break;
                }
            tmp /= 10;
            }
        }
    }
    cout << endl;
    return 0;
}
