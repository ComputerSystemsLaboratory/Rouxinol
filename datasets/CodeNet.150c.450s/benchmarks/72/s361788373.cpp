#include<iostream>
#include<cctype>

using namespace std;

int main(){
	char ch[1201];
	int i=0;	
	cin.getline(ch,1201,'\n');
	

	while(1){
		if(ch[i]=='\0')
			break;
		if(islower(ch[i]))
			cout<<static_cast<char>(toupper(ch[i]));
		else if(isupper(ch[i]))
			cout<<static_cast<char>(tolower(ch[i]));
		else 
			cout<<ch[i];
		i++;
	}		
	cout<<endl;
}