#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {
    double ax,ay,bx,by,cx,cy,dx,dy;
    int n;
    cin>>n;
    
    while(cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy){
        if((ax-bx)==0&&(cx-dx)==0){
            cout<<"YES"<<endl;
        }else if((ax-bx)!=0.0 && (cx-dx)!=0.0){
            double a = (ay-by)/(ax-bx);
            double c = (cy-dy)/(cx-dx);
            if(a==c){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}