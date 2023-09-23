#include <iostream>

using namespace std;

int a,b,c,d;

int main(){
    int input;
    while (cin >> input) {
int count(0);
        for (int a = 0; a < 10; ++a){
            for (int b = 0; b < 10; ++b){
                for (int c = 0; c < 10; ++c){
                    for(int d = 0; d < 10; ++d){
                        count+=a+b+c+d==input;
                    }
                }
            }
        }
        cout << count << endl;
    }
}