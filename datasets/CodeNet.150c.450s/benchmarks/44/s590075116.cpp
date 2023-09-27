#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    string a0,a1,a2,a3,b0,b1,b2,b3;
    while(cin>>a0>>a1>>a2>>a3>>b0>>b1>>b2>>b3){
        int h=0,bl=0;
        if(a0==b0)h++;
        if(a1==b1)h++;
        if(a2==b2)h++;
        if(a3==b3)h++;
        if(a0==b1||a0==b2||a0==b3) bl++;
        if(a1==b0||a1==b2||a1==b3) bl++;
        if(a2==b0||a2==b1||a2==b3) bl++;
        if(a3==b0||a3==b1||a3==b2) bl++;
        
        cout<<h<<" "<<bl<<endl;
    }
    return 0;
}