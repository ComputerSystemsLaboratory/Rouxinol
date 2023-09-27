#include<iostream>
using namespace std;
 
int Square(int x, int y)
{
return x*y;
}
 
int Length(int x, int y)
{
return 2*(x+y);
}
 
int main()
{
int x;
int y;
 
cin>>x>>y;
cout<<Square(x,y) <<" "<<Length(x,y)<<endl;
return 0;
}
 