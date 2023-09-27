#include <iostream>

using namespace std;

int main(){
        int *x; 
        int _x[10];
        x = _x; 
        int in = 0;
        while(cin >> in){
                if(!in){
                        cout << *(x-1) << endl;
                        x--;
                }else{
                        *x = in; 
                        x++;
                }   
        }   
}