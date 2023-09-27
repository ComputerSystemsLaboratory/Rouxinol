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

class c_sum
{
private:

public:
    c_sum();
    void f_input();
    int f_sum(unsigned int *a, int r1, int r2);
};

c_sum::c_sum()
{

}

void c_sum::f_input()
{
    int n;
    int q;
    int i, j, k;
    unsigned int a[100000];
    int c1;
    int c2;
    int c3;
    int temp1;
    int temp2;
    
    cin >> n >> q;
    
    for ( i = 0; i < n; ++i){
        a[i] = 0;
    }
    
    //for (i=0; i<n; ++i){
    //    cout << "a[" << i << "]: " << a[i] << endl;
    //}
    
    for ( i = 0; i < q; ++i){
        cin >> c1 >> c2 >> c3;
        temp2 = c2-1;
        //cout << "temp2: " <<  temp2 << endl;
        if (c1 == 1){
            cout << f_sum(a,c2-1,c3-1) << endl;
        }else if (c1 == 0){
            a[temp2] = a[temp2] + c3;
            
            //for (k=0; k<n; ++k){
            //    cout << "a[" << k << "]: " << a[k] << endl;
            //}
        }
    }
    
    //for (i=0; i<n; ++i){
    //    cout << "a[" << i << "]: " << a[i] << endl;
    //}
}

int c_sum::f_sum(unsigned int *a, int r1, int r2){
    int temp1;
    int i;
    int temp_sum;
    unsigned int *temp_a;
    
    temp_a = &*a;
    
    temp_sum = 0;
    
    for (i = r1; i < r2 +1;++i){
        temp_sum = temp_sum + temp_a[i]; 
    }
    
    temp1 = temp_sum;
    
    return temp1;
}

int main(){
    
    c_sum sum01;
    sum01.f_input();
    
    return 0;
}