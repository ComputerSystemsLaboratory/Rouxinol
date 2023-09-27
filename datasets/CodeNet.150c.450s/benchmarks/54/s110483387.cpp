#include<iostream>
#include<string>
using namespace std;

int main()
{
	string w;
	string t;
	int count=0;
	int i=0;
	
	cin >> w;
	while(w[i]!='\0'){
		if(islower(w[i]))
			w[i]=toupper(w[i]);
		i++;
	}
	
	while(1){
		cin >> t;
		if(t=="END_OF_TEXT")
			break;
		
		i=0;
		while(t[i]!='\0'){
			if(islower(t[i]))
				t[i]=toupper(t[i]);
			i++;
		}
		
		if(t==w)
			count++;
	}
	
	cout << count << endl;
	
	return 0;
}