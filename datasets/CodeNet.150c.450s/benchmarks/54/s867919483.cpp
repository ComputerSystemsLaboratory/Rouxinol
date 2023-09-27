#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	string word,target,EOT="END_OF_TEXT";
	int i=0,j;

cin >>target;

while(1){
	cin>>word;
	if(word == EOT) break;
	
for(j=0;j<word.size();j++)
		if(isupper(word[j])) word[j]=tolower(word[j]);

	if(word == target) i++;
	}
cout <<i <<"\n";
return 0;
}