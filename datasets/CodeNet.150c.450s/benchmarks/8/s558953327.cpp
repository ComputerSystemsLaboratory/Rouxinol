#include<iostream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
  int number;
  int taro_point=0;
  int hanako_point=0;
  string taro,hanako;
  cin >> number;
  for(int i=0;i<number;i++)
  {
    cin >> taro >> hanako;
    if(taro>hanako) taro_point+=3;
    else if(hanako>taro) hanako_point+=3;
    else
    {
      taro_point+=1;
      hanako_point+=1;
    }
  }
  cout << taro_point << " " << hanako_point << endl;
}