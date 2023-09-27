#include<iostream>

using namespace std;

int main()
{
  char a;
  int sum;
  while((a=cin.get())!='0'){
    sum = (int)a-48;
    while((a=cin.get())!='\n'){
      sum += (int)(a)-48;
    }
    cout << sum << endl;
  }
  return 0;
}

