#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
  char a[1200];
    cin.getline(a, sizeof(a));
    for(int i=0;i<sizeof(a);i++)
    {
      if(a[i]=='\0')
      {
        cout << endl;
        break;
      } 
      if(islower(a[i])) a[i]=toupper(a[i]);
      else if(isupper(a[i])) a[i]=tolower(a[i]);
      cout << a[i];
  }
}