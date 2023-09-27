#include <iostream>
using namespace std;

int main(){
    int in,ma,sc,en,in2,ma2,sc2,en2;
    cin >> in >> ma >> sc >> en >> in2 >> ma2 >> sc2 >> en2;
    if(in + ma + sc + en > in2 + ma2 + sc2 + en2){
        cout << in + ma + sc + en << endl;
    }
    else{
        cout << in2 + ma2 + sc2 + en2 << endl;
    }
}