#include<iostream>
#include<string>

using namespace std;

int main(){

	int n;
	int cnt;
	string move,bef;

	while(1){

		cin>>n;
		if(n==0) break;

		bef="NO";
		cnt=0;
		while(n--){

			cin>>move;
			if(bef=="lu"&&move=="ru"||bef=="ru"&&move=="lu"||bef=="ld"&&move=="rd"||bef=="rd"&&move=="ld") cnt++;

			bef=move;
		}

		cout<<cnt<<endl;

	}

	return 0;
}