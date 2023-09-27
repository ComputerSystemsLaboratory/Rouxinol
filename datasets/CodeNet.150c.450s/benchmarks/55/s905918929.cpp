#include <iostream>

using namespace std;

int main()
{
  int i;
  char number[1001]={0};
  int sum=0;
  
  while(1)
  {
    sum=0;
    cin >> number;
    
    for(i=0;number[i]!='\0';i++)
    {
      sum+=number[i]-'0';
    }
    if(number[0]=='0')
      break;
    cout << sum <<"\n";
    
  }
}