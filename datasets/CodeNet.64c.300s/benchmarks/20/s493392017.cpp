#include <iostream>
using namespace std;

int area(int d){
    int s = 0;
    for(int i=d; i<=(600-d); i+=d){
        s = s + i*i*d;
    }
    return s;
}

int main(void){
    int d;
    while(cin >> d){
        cout << area(d) <<endl;
    }

 return 0;
}

