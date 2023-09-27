#include<iostream>
using namespace std;
int main(){
	int time;
	char word;
	while(cin>>time&&time!=0){
		char henkan[128]={0};
		char hena,henb;
		for(int i=0;i<time;++i){
			cin>>hena>>henb;
			henkan[hena]=henb;
		}
		cin>>time;
		for(int i=0;i<time;++i){
			cin>>word;
			if(henkan[word]!=0){
				cout<<(char)henkan[word];
			}else{
				cout<<word;
			}
		}
		cout<<endl;
	}
	return 0;
}