#include<iostream>
using namespace std;
int main(){
    int m, f, r, p;
    
    while(1){
        cin >> m >> f >> r;
        
        p = m + f;
        
        if((m == -1) && (f == -1) && (r == -1)) break;
        
        if((m == -1) || (f == -1)){
            cout << "F" << endl;
        }
        
        else if(p >= 80){
            cout << "A" << endl;
        }
        
        else if((p < 80) && (p >= 65)){
            cout << "B" << endl;
        }
        
        else if((p < 65) && (p >= 50)){
            cout << "C" << endl;
        }
        
        else if((p < 50) && (p >= 30)){
            if(r >= 50){
                cout << "C" << endl;
            }else{
                cout << "D" << endl;
            }
        }
        
        else if(p < 30){
            cout << "F" << endl;
        }
    }
}
