#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <stack>

using namespace std;

class c_polish
{
private:

public:
    c_polish();
    void f_input();
};

c_polish::c_polish()
{
    
}

void c_polish::f_input()
{
    string s[200];
    long i;
    long data0;
    stack<long> data1;
    long data2;
    long temp1;
    long temp2;
    long temp3;
    
    for (i=0; cin >> s[i]; ++i){
        if (s[i] == "+"){
            temp1 = data1.top();
            data1.pop();
            temp2 = data1.top();
            data1.pop();
            temp3 = temp1 + temp2;
            data1.push(temp3);
        }else if (s[i] == "-"){
            temp1 = data1.top();
            data1.pop();
            temp2 = data1.top();
            data1.pop();
            temp3 = temp2 - temp1;
            data1.push(temp3);
        }else if (s[i] == "*"){
            temp1 = data1.top();
            data1.pop();
            temp2 = data1.top();
            data1.pop();
            temp3 = temp1 * temp2;
            data1.push(temp3);
        }else{
            data0 = atol(s[i].c_str());
            data1.push(data0);
        }
    }
    
    cout <<  temp3 << endl;
    
}

int main(){
    
    c_polish polish01;
    polish01.f_input();
    
    return 0;
}