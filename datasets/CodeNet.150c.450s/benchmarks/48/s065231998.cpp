#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        if(a==0){
            break;
        }
        int Z=0,Y=0,X=0,z=0,y=0,m=10000000;
        for(z=0;pow(z,3)<=a;z++){
            Z=pow(z,3);
            for(y=0;pow(y,2)<=a-Z;y++){
                Y=pow(y,2);
            }
            X=a-Y-Z;
            if(X+y+z-2<m){
                m=X+y+z-1;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}