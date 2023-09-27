#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
	int num;
	cin>>num;
	bool error=false;
	for(int x=0;x<num;x++){
		error=false;
		queue<int> A;
		vector<int> B;
		vector<int> C;
		for(int i=0;i<10;i++){
			int nn;
			cin>>nn;
			A.push(nn);
		}
		int nn=A.size();
		C.push_back(0);
		for(int i=0;i<nn;i++){
			if(i==0){
				B.push_back(A.front());
				A.pop();
				continue;
			} else if(A.front()>B.back()){
				B.push_back(A.front());
				A.pop();
			}else if(A.front()>C.back()){
				C.push_back(A.front());
				A.pop();
			}else{
				error=true;
			}
		}
		if(error==false)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}