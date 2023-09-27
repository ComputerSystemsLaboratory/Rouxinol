#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[])
{
  string value;
  int sum;
  while(1)
  {
    sum=0;
    cin >> value;
    if(value=="0")break;
    for(int i=0;i<value.size();i++)
    {
      sum+=value[i]-'0';
    }
    cout << sum << endl;
  }
}