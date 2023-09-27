#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,x=0,y=0;
    while(cin >> a >> b >> c >> d >> e >> f >> g >> h){
        x=0;
        y=0;
        if (a==e){x=x+1;} 
        if (b==f){x=x+1;} 
        if (c==g){x=x+1;}
        if (d==h){x=x+1;}
        if (e==b || e==c || e==d){y=y+1;}
        if (f==a || f==c || f==d){y=y+1;}
        if (g==a || g==b || g==d){y=y+1;}
        if (h==a || h==b || h==c){y=y+1;}
        cout << x << " " << y << endl;
    }  
return 0 ;
}

