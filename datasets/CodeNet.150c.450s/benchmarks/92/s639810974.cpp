#include<iostream>
#include<cmath>

using namespace std;

int main() {
        int a, b;
        while(cin>>a>>b) {
                int c=a+b;
                for(int i=1; i<=8; i++) {
                        int power = pow(10, i);
                        if(c/power==0) {
                                cout << i << endl;
                                break;
                        }
                }
        }
        return 0;
}