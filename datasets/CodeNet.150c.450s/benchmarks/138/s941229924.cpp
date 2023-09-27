#include <iostream>
using namespace std;

int main(){
    int in1, in2, temp;
    cin >> in1 >> in2;
    if(in1>in2) swap(in1, in2);
    while(in2>0){
        temp = in1%in2;
        in1  =in2;
        in2 = temp;
    }
    cout << in1 << endl;

    return 0;
}