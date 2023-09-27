#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

int main()
{
	int i=0,j;
	char inch[1200];

while(1){

	scanf("%c",&inch[i]);
	
if( inch[i] == '\n' ) break;

	if( isupper(inch[i]) ) inch[i] = tolower(inch[i]);
	else if( islower(inch[i]) ) inch[i] = toupper(inch[i]);
	else ; 	
	i++;	
		}

for(j=0;j < i; j++){
		
	cout <<inch[j];
	}
cout <<"\n";
return 0;
}