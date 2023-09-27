#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
#include <stack>

using namespace std;
double T_area(double x1,double y1, double x2, double y2, double x3, double y3);

int main(){
    stack<int> st;    // int型のスタック
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n!=0){
            st.push(n);
        }else{
            cout << st.top() << "\n";
            st.pop();
        }
    }
    
    
}