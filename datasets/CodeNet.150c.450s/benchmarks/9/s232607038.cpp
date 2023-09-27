#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	string str;
	char ch;
	int m;
	int h;
	int len;
	int i,j,k;
	
	while(1){
		cin >> str;
		if(str=="-")
			break;
		
		i=0;
		len=0;
		while(str[i]!='\0'){
			len++;
			i++;
		}
		
		cin >> m;
		for(i=0;i<m;i++){
			cin >> h;
			for(j=0;j<h;j++){
				ch=str[0];
				for(k=0;k<len-1;k++){
					str[k]=str[k+1];
				}
				str[k]=ch;
				k++;
				str[k]='\0';
			}
		}
		
		cout << str << endl;
		
	}
	return 0;
}