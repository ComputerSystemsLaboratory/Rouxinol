#include <iostream>
#include <cstdio>
using namespace std;

int combination(int num) {
    int ret = 0;
    for(int n1 = 0; n1 <= 9; n1++) {
        for(int n2 = 0; n2 <= 9; n2++) {
            for(int n3 = 0; n3 <= 9; n3++) {
                for(int n4 = 0; n4 <= 9; n4++) {
                    if(n1 + n2 + n3 + n4 == num) ret++;
                }
            }
        }
    }
    return(ret);
}

int main(void) {
    int num;
    while(cin >> num) cout << combination(num) << endl;
    return(0);
}