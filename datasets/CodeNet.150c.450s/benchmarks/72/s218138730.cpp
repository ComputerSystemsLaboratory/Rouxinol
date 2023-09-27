#include<iostream>
#include <cstdio>
#include<cctype>
 
using namespace std;
 
int main(){
     
    char ch;
     ch = getchar();
    while( ch != EOF)
	{
        if(islower(ch))
            ch = toupper(ch);
        else
            ch = tolower(ch);
        cout << ch;
		 ch = getchar();
    }  
  return 0;
}