#include<iostream>
using namespace std;

int main()
{
	string name;
	getline(cin,name);
	
	for(int i=0;name[i]!='\0';i++){
		if(name[i]>='A'&&name[i]<='Z'){
			name[i]+=' ';
		}
		else if(name[i]>='a'&&name[i]<='z'){
			name[i]-=' ';
		}
	}
	cout<<name<<endl;
}