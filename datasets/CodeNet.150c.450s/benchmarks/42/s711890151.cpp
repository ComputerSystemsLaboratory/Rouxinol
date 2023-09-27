#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main(){
	int n,q,temp,ttime,ntime=0;
	string tname,temps;
	queue<string> name;
	queue<int> time1;
	cin >> n >> q;
	int i=0;
	while(i!=n){
		cin >> tname >>ttime;
		name.push(tname);
		time1.push(ttime);
		i++;
	}
	while(!name.empty()){
		if(time1.front()>q){
			ntime+=q;
			name.push(name.front());
			time1.push(time1.front()-q);
			name.pop();
			time1.pop();
		}else{
			ntime+=time1.front();
			cout<< name.front()<<" "<< ntime<<endl;
			name.pop();
			time1.pop();
		}
	}
	return 0;
}