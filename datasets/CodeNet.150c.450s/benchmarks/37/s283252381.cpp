//
//  main.cpp
//  b
//
//  Created by h3037178 on 2017/07/31.
//  Copyright ?? 2017??´ ?????£?????????. All rights reserved.
//

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    for(double a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;){
        double x=(c*e-f*b)/(a*e-d*b);
        double y;
        if(e){
            y=(f-d*x)/e;
        }else{
            y=(c-a*x)/b;
        }
        if(fabs(x)<1e-4){
            x=0;
        }
        if(fabs(y)<1e-4){
            y=0;
        }
        cout<<fixed<<setprecision(3)<<x<<' '<<y<<endl;
    }
    return 0;
}