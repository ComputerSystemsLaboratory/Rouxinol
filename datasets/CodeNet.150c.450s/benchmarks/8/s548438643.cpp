#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n, tarosc=0, hanakosc=0;
  string taro, hanako;
  cin >> n;
  for(int i=0;i<n;i++)
    {
      cin >> taro >> hanako;
      if(taro == hanako)
	{
	  tarosc += 1;
	  hanakosc += 1;
	}
      else if(taro > hanako)
	{
	  tarosc += 3;
	}
      else if(taro < hanako)
	{
	  hanakosc += 3;
	}
    }
  cout << tarosc << " " << hanakosc << endl;
}