#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>

using namespace std;

class c_selection
{
private:
    int n;
    long x[100];
    
public:
    void f_selection();
    
};

void c_selection::f_selection()
{
    int i, j;
    int k;
    int min_x;
    int temp1;
    int temp2;
    int c;
    
    cin >> n;
    for ( i = 0; i < n; ++i){
        cin >> x[i];        
    }
    
    c = 0;
    temp2 = 0;
    
    for ( i = 0; i < n; ++i){
        min_x = i;
        temp2 = 0;
        for ( j = i; j < n; ++j){
            if (x[j] < x[min_x]){
                min_x = j;
                temp2 = 1;
            }
        }
        if (temp2 == 1){
            temp1 = x[min_x];
            x[min_x] = x[i];
            x[i] = temp1;
            c += 1;
            //cout << "i = "<< i << endl;
            //cout << "j = "<< j << endl;
            /*
            for ( k = 0; k < n; ++k){
                cout << x[k];
                if( k == n-1){
                    cout << endl;
                }else{
                    cout << " ";
                } 
            }
            */
        }
    }
    
    for ( i = 0; i < n; ++i){
        cout << x[i];
        if( i == n-1){
            cout << endl;
        }else{
            cout << " ";
        }        
    }
    cout << c << endl;
}

int main(){
    c_selection selection01;
    
    selection01.f_selection();
    
    return 0;
}