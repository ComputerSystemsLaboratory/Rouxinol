#include <iostream>
using namespace std;
 
void swap(int& x, int& y){
    int tmp = x;
    x=y;
    y=tmp;
}
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
     
    cout << a << " " << b << " "  << c << endl;
}
