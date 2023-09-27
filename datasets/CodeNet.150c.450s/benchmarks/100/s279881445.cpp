#include <iostream>
using namespace std;
int main(void){
    long long int t=1 ;
    int loop;
    cin >> loop;
    for(int i=1;i<=loop;i++) {
        t *= i;
    }
    cout << t << endl;
}