#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <stack>
#include <queue>
#include <list>
#include <vector>

using namespace std;

class c_counting
{
private:

public:
    c_counting();
    void f_input();
};

c_counting::c_counting()
{

}

void c_counting::f_input()
{
    int n;
    int i;
    int j;
    int m;
    int d_max;
    static int a[2000000];
    static int c[2000000];
    
    cin >> n;
    
    d_max = 0;
    
    for ( i = 0; i < n; ++i){
        cin >> a[i];
        if (d_max < a[i])d_max =a[i];
    }
    
    for ( i = 0; i < d_max + 1; ++i){
        c[i] = 0;
    }
    
    for ( i = 0; i < n; ++i){
        c[a[i]] = c[a[i]] + 1;
    }
    
    /*
    cout << endl;
    
    for ( i = 0; i < d_max + 1; ++i){
        cout << c[i] << endl;
    }
    
    cout << endl;
    */
    m = 0;
    for ( i = 0; i <= d_max + 1; ++i){
        
        for ( j = 0; j < c[i]; ++j){
            if ( c[i] > 0 ){
                if ( m == n-1 ){
                    cout << i << endl;
                }else{
                    cout << i << " ";
                    ++m;
                }
            }
        }
    }
}

int main(){
    
    c_counting counting01;
    counting01.f_input();
    
    return 0;
}