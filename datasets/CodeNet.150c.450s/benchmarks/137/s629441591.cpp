#include<set>
#include<iostream>
#include<string>

using namespace std;

int main ()
{
	set<string> dictionary;
	string command;
	string word;
	int n,i;

	cin>>n;

	for(i=0;i<n;i++){
		if(cin>>command&&command=="insert"){
			cin>>word;
			dictionary.insert(word);
		} else{
			cin>>word;
			if(dictionary.count(word)){
				cout<<"yes"<<endl;
			} else {
				cout<<"no"<<endl;
			}
		}
	}

	return 0;
}