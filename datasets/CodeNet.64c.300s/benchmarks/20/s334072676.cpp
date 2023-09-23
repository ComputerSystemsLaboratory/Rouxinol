#include <iostream>
using namespace std;

int main(){
    long int d;
    long int total;
    while(cin >> d){
        total = 0;
        for(int i=1;i*d<600;i++){
            total += (i*d)*(i*d)*d;
        }
        cout << total << endl;
    }
}