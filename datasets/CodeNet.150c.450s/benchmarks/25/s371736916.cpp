#include<iostream>
using namespace std;
 
int main(void){
    int a[26]={0};
    char text;
    while(cin >> text){
	if(text >= 'a' && text <= 'z' )
		a[text-'a']++;
	if(text >= 'A' && text <= 'Z' )
		a[text-'A']++;
        }
	for(int i = 0; i<26;i++)
	{
		cout <<(char)(i+'a')<<" : "<<a[i]<<endl;
	}
    return 0;
}