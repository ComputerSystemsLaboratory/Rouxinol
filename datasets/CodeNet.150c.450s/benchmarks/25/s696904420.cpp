#include <iostream>

using namespace std;

int main()
{
  char ch;
  int counter[27]={0};
  int i;
  int num;
  char abc='a';
  
//  cin.getline(ch,1201,'\n');
//  for(i=0;ch[i]!='\0';i++)
  while(cin >> ch)
  {
    
    if(isupper(ch))
      ch=static_cast<char>(tolower(ch));
    
    num=ch-'a';
    counter[num]++;
  }
  
  for(i=0;i<26;i++)
  {
    cout << abc << " : " << counter[i] <<"\n";
    abc=(int)abc+1;
  }
}