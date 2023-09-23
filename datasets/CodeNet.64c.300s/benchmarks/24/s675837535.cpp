#include <iostream>
using namespace std;

int A = 0, B = 0, j;

int main(){
    for(;;){
        if(cin >> j){
            A = 0;
            B = 0;
            if(j == 0){
                break;
            }
            for(int i = 0; i < j; i++){
                int as, bs;
                cin >> as >> bs;
                if(as > bs){
                    A += as + bs;
                }else if(as < bs){
                    B += as + bs;
                }else{
                    A += as;
                    B += bs;
                }
            }
            cout << A << " " << B << endl;
        }else{
            break;
        }
    }
    return 0;
}