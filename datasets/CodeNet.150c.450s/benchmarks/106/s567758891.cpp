#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int i;
    int x;
    int y=0;
    
    cin >> a >> b >> c;
    x = b - a + 1; 
    
    for (i=0; i < x; i++){
        if (c % (a + i) == 0){
            y++;
        }
    }   
    cout << y << endl;
    
    return 0;
}