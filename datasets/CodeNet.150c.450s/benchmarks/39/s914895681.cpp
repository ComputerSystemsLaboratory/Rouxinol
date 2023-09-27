#include<iostream>
using namespace std;

int rectangle_menseki(int a, int b);
int rectangle_syu(int a, int b);

int main(){
    int tate, yoko;
    
    cin >> tate;
    cin >> yoko;
    
    cout << rectangle_menseki(tate, yoko) << " " <<  rectangle_syu(tate, yoko) << endl;
    return 0;
}

int rectangle_menseki(int a, int b){
    int menseki;
    menseki = a * b;
    return menseki;
}

int rectangle_syu(int a, int b){
    int syu;
    syu = 2 * a + 2 * b;
    return syu;
}
