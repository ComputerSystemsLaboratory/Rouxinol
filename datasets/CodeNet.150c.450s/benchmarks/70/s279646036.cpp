#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
 
using namespace std;
 
int main() {
    int M[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    string W[7]={"Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"};
     
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF){
        if(x==0||y==0){
            break;
        }
        int day=0;
        for(int i=1; i<x; i++){
            day+=M[i];
        }
        day+=y+2;
        int week = day % 7;
        cout<<W[week]<<endl;
     
    }
    return 0;
}