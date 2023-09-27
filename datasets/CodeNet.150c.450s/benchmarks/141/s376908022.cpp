#include<iostream>
#include<math.h>
using namespace std;
double area_3point(double x1,double y1,double x2,double y2,double x3,double y3);
int main(){
        while(1){               
                double x1,y1,x2,y2,x3,y3,xp,yp;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp;
                if(cin.eof()) break;
		double s,s1,s2,s3;  
                s=area_3point(x1,y1,x2,y2,x3,y3);
 		s1= area_3point(x1,y1,x2,y2,xp,yp);
		s2=area_3point(x1,y1,xp,yp,x3,y3);               
  		s3=area_3point(xp,yp,x2,y2,x3,y3);  
                if(s<(s1+s2+s3-0.0000001)){ 
                       cout<<"NO"<<endl;
                }else {     
                        cout<<"YES"<<endl; }        
        }
        return 0;
}

double area_3point(double x1,double y1,double x2,double y2,double x3,double y3){
     double s,a,b,c,area;
     a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
     b = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
     c = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
     s=(a+b+c)/2.0;
     area=sqrt(s*(s-a)*(s-b)*(s-c));

     return area;
}