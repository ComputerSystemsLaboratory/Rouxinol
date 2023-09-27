#include<iostream>
using namespace std;
int kan(int i)
{
if(i==0)
{
  return 1;
}
else if(i==1)
{
  return kan(i-1);
}
else if(i==2)
{
  return kan(i-1)+kan(i-2);
}
else
{
  return kan(i-1)+kan(i-2)+kan(i-3);
}
};
int main()
{
 int i,days,years;
 while(cin>>i&&i)
 {
  if(kan(i)%10!=0)
    days=(kan(i)/10)+1;
  else
    days=kan(i)/10;

  if(days%365!=0)
    years=(days/365)+1;
  else
    years=days/365;
  cout<<years<<endl;
 }
}