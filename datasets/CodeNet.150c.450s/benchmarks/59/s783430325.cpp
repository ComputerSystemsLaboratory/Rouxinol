#include<iostream>
using namespace std;
int main(){
	int time;
	int *line;
	cin>>time;
	line=new int[time];
	for(int i=0;i<time;++i){
		cin>>line[i];
	}
	int place;
	int doll;
	for(int i=0;i<time-1;++i){
		cout<<line[i]<<' ';
	}
	cout<<line[time-1]<<endl;
	for(int it=1;it<time;++it){
		doll=line[it];
		for(place=it-1;place>=0&&line[place]>doll;--place)
			line[place+1]=line[place];
		line[place+1]=doll;
		for(int i=0;i<time-1;++i){
			cout<<line[i]<<' ';
		}
	cout<<line[time-1]<<endl;
	}
	delete[] line;
	return 0;
}