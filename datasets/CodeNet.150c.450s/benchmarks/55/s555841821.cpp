#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  int sum;
  int array[1000];
  int j=0;

  while(true)
    {
      cin >> str;
      if(str=="0")
	break;
      sum=0;
      for(int i=0;i<str.size();i++)
	sum+=str.at(i)-'0';
      array[j]=sum;
      j++;
    }

  for(int i=0;i<j;i++)
    cout << array[i] << endl;


  return 0;
}