#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <stack>
#include <queue>

using namespace std;

class c_roundrobin
{
private:

public:
    c_roundrobin();
    void f_input();
};

c_roundrobin::c_roundrobin()
{
    
}

void c_roundrobin::f_input()
{
    long n;
    int t;
    long i;
    string pn[100000];
    unsigned int pt[100000];
    long sumOfTime;
    queue<string> qu1;  
    queue<long> qu2;
    long temp1;
    string temp2;
    
    cin >> n >> t;
    for ( i = 0; i < n; ++i ){
        cin >> pn[i] >> pt[i];    
    }
    
    for ( i = 0; i < n; ++i ){
        qu1.push(pn[i]);
        qu2.push(pt[i]);   
    }
    
    sumOfTime = 0;
    i = 0;
    for (;;){
        temp2 = qu1.front();
        temp1 = qu2.front(); 
        if (temp1 > t){
            sumOfTime = sumOfTime + t;
            temp1 = temp1 - t;
            qu2.push(temp1);
            qu2.pop();
            qu1.push(temp2);   
            qu1.pop();
        }else{
            sumOfTime = sumOfTime + temp1;
            pn[i]=temp2;
            pt[i]=sumOfTime;
            i = i +1;
            //t= t + (t - temp1);
            qu2.pop();
            qu1.pop();
        }
        if (qu1.empty() || qu2.empty())break;
    }
    
    for ( i = 0; i < n; ++i){
        cout << pn[i] << " " << pt[i] << endl;
    } 
}

int main(){
    
    c_roundrobin roundrobin01;
    roundrobin01.f_input();
    
    return 0;
}