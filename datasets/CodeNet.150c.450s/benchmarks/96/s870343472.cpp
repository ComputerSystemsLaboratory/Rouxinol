#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		string key[]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
		string input;
		cin>>input;
		stringstream b(input);
		int num=0,count=0;
		while(1){
			char c;
			if(!(b>>c))break;
			int input=c-'0';
			if(input!=0){
				count++;
				num=input;
			}
			else {
				if(count!=0)
					cout<<key[num-1][(count-1)%key[num-1].size()];
				num=0;count=0;
			}
		}
		cout<<endl;
	}
	return 0;
}