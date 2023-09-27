#include<iostream>
#include<string>
using namespace std;

int main(){
	string w,t;
	int counter=0;
	cin>>w;
	for(int i=0;i<w.length();i++){
		if(islower(w[i])) w[i]=toupper(w[i]);
	}
	while(cin>>t){
		if(t=="END_OF_TEXT"){
			cout<<counter<<endl;
			break;
		}
		for(int i=0;i<t.length();i++){
			if(islower(t[i])) t[i]=toupper(t[i]);
		}
		if(t==w) counter++;
	}

	return 0;
}