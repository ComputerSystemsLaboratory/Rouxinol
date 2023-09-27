 #include<iostream>
 #include<stdio.h>
 #include<string>
 #include<math.h>
 #include<iomanip>
 #include<algorithm>
 #include<string.h>
 #include<cctype>
 #include<map>
 #include<set>
 #include<vector>
 #include<sstream>
 
 using namespace std;
 
 //int v[35];
 
 double triangleArea(double xa,double ya,double xb,double yb,double xc,double yc) 
 {
    double result = ((xa * yb + xb * yc + xc * ya- xb * ya - xc * yb - xa * yc) / 2.0);
    if(result<0) result=-result;
    return result;
 }
 
 int main()
 {
   double x1,y1,x2,y2,x3,y3,xp,yp;
   while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
   {
     double triangleAreaKK = triangleArea(x1,y1, x2,y2, x3,y3);
     double area = triangleArea(xp,yp, x1,y1, x2,y2);
     area += triangleArea(xp,yp, x1,y1, x3,y3);
     area += triangleArea(xp,yp, x2,y2, x3,y3);
     if(((triangleAreaKK-area)<0.00000001)&&((triangleAreaKK-area)>-0.00000001)) puts("YES");
     else puts("NO");     
   }
   //while(1);      
   return 0;    
 }