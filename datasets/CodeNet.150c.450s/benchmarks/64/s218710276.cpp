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

class c_recursion
{
private:
    int a[2000];

    
public:
    c_recursion();
    void f_input();
    int f_do(int n1, int m1, int i, int s);
};

c_recursion::c_recursion()
{

}

void c_recursion::f_input()
{
    int n,q;
    int i;
    int temp1;
    
    int m[2000];
   
 
    
    cin >> n;
    for ( i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> q;
    for ( i = 0; i < q; ++i){
        cin >> m[i];
    }
  
    
    for ( i = 0; i < q; ++i){
        temp1 = c_recursion::f_do(n,m[i],0,0);
        //temp1 = c_recursion::f_do(n,100,0,0);
        //cout << temp1<< endl;
        if (temp1 == 1){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;        
        }
    }
    
}

int c_recursion::f_do(int n1, int m1, int i, int s)
{
 
    int j;
    int res;
    
    res = 0;
    
    for ( j = i; j <= n1;++j ){
        
        //cout << "s: " << s << endl;
        
        if (m1 == s){
            //cout << "return: " << s << " "<< m1 << endl;
            res = 1;
            break;
        }else{
            res = 0;
            if (c_recursion::f_do(n1, m1, j + 1,s + a[j])){
                res =1;
                break;
            }
        } 
    }
    
    if (res == 1){
        //cout << "return 1: " << res << " "<< endl;
        return 1;
    }else{
        //cout << "return 0: " << res << " "<< endl;
        return 0;
    }
}

int main(){
    
    c_recursion recursion01;
    recursion01.f_input();
    
    return 0;
}