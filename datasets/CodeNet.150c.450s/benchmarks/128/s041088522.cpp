#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;
	
	cin>>name;
	int i=name.size();
	i--;
	while(i>=0){
		cout<<name[i];
		i--;
	}
	
	cout<<endl;
	return 0;
}