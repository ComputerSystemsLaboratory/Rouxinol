#include <iostream>
#include <string.h> 
#include <algorithm>
using namespace std;

int main()
{
    int judge,count=0;
	char str[1001];
	string word;
	string text;
	string eot="END_OF_TEXT";
	
	cin>>word;
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	while(1)
	{
		cin>>text;
		if(text==eot)break;
		//if ( 0== (judge=stricmp( word.c_str() , text.c_str()))) count+=1;
		transform(text.begin(), text.end(), text.begin(), ::tolower);
		if(word==text)count+=1;
	}
	cout<<count<<endl;
    return 0;
}