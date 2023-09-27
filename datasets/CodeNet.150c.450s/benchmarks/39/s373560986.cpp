#include <iostream>
using namespace std;

int mult(int a , int b);
int add(int a , int b);

int main(int argc, const char * argv[]) {
    int a,b;
    cin >> a >> b;
    cout << mult(a,b) <<  " " << add(a,b) << endl;
    return 0;
}

int add(int a, int b){
    return a*2+b*2;
}

int mult(int a , int b){
        return a*b;
}