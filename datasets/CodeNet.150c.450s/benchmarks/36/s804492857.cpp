#include <iostream>
#include <cstdio>
using namespace std;

int area(int d) {
        int sum=0;
        for(int i=0;i<600;i+=d){
                sum += d*i*i;
        }
        return sum;
}

int main(void){
        int d;
        while(cin >> d) {
        cout << area(d) << endl;
        }
        return 0;
}
