#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  char ch[1201];
  int i=0;
  
    cin.getline(ch,1201,'\n');
//    cout << ch <<"\n";
    
    for(i=0;ch[i]!='\0';i++)
    {
//        cout << ch[i] <<"\n";
      if(islower(ch[i]))
      {
        cout << static_cast<char>(toupper(ch[i]));
        continue;
      }
      if(isupper(ch[i]))
        cout << static_cast<char>(tolower(ch[i]));
      else 
        cout << ch[i];
    }
   
   cout << "\n";
}