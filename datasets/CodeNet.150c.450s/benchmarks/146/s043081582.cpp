#include <bits/stdc++.h>
using namespace std;
 
int main(){
     
    int n;
    cin>>n;
    while(n--){
        double x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(fabs(x1-x2)<1e-9){
            if(fabs(x3-x4)<1e-9)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            double a=(y1-y2)/(x1-x2);
            double b=(y3-y4)/(x3-x4);
            if(fabs(a-b)<1e-9)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
     
    return 0;
}
