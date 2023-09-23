#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int c2 = 1;
    int c3;
    int count = 0;
    
    cin >> a >> b >> c;
    
    while(c2 <= c){
        c3 = c % c2;
        if(c3 == 0){
            if((a <= c2) && (c2 <= b)){
                count ++;
            }
        }
        c2 ++;
    }
    
    cout << count << endl;
}
