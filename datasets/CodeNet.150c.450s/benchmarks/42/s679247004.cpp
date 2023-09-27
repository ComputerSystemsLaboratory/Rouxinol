#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<string>
using namespace std;

int main(void){
    int b,n,q,i,tmp=0;
    string a;
    queue<string> qu_name;
    queue<int> qu_time;
    cin >> n >> q;
    for(i=0;i<n;i++){
        cin >> a >> b;
        qu_name.push(a);
        qu_time.push(b);
    }
    while(!qu_time.empty()){
        b=qu_time.front();
        a=qu_name.front();

        if(b<=q){
            tmp+=qu_time.front();
            cout << a << " " << tmp << endl;
            qu_time.pop();
            qu_name.pop();

        }
        else{
            tmp+=q;
            qu_time.pop();
            qu_name.pop();
            qu_name.push(a);
            qu_time.push(b-q);
        }
    }
    return 0;
}