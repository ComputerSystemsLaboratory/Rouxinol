#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,x,y;
    
    while (cin >> a >> b >> c >> d) {
    x = 0;
    y = 0;
    cin >> e >> f >> g >> h;
        if (a==e){x=x+1 ;e=e+10;} 
        if (b==f){x=x+1;f=f+10;} 
        if (c==g){x=x+1;g=g+10;}
        if (d==h){x=x+1;h=h+10;}
        if (e==a || e==b || e==c || e==d){y=y+1;}
        if (f==a || f==b || f==c || f==d){y=y+1;}
        if (g==a || g==b || g==c || g==d){y=y+1;}
        if (h==a || h==b || h==c || h==d){y=y+1;}
        cout << x << " " <<  y << endl;
    }
    
return 0 ;
}

