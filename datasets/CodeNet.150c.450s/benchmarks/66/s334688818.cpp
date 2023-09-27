#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
bool fi(vector<string>id,string now){
	for(int i=0;i<id.size();i++){if(now==id[i])return true;}
	return false;
}
int main(){
	int n,m;
	//bool key[2000]={1};
	cin>>n;
	vector<string>id;
	map<string,bool>key;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		id.push_back(tmp);
		key[tmp]=true;
	}
	cin>>m;
	bool flag=1;
	for(int i=0;i<m;i++){
		string now;
		cin>>now;
		if(fi(id,now)==false){
			cout<<"Unknown"<<" "<<now<<endl;
		}
		
		else {
			if(flag==true){
				cout<<"Opened by"<<" "<<now<<endl;
				flag=false;
			}
			else if(flag==false){
				cout<<"Closed by"<<" "<<now<<endl;
				flag=true;
			}
		}
	}
	return 0;
}