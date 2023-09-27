#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int n=0,t=0,h=0;
    string T,H;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> T >> H;
        if(T == H){
            t++;
            h++;
        }
        else if(T > H){
            t += 3;
        }
        else if(T < H){
            h += 3;
        }
    }
    cout << t << " " << h <<endl;
}
