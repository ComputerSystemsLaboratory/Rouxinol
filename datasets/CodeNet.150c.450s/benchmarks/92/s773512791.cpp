#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int digit(int);

int main(){
	int a,b;
	vector<pair<int,int> > out;
	while (cin>>a>>b){
		pair<int,int> p=make_pair(a,b);
		out.push_back(p);
	}
	for (int i=0;i<out.size();i++){
		cout<<digit(out[i].first+out[i].second)<<endl;
	}
	return 0;
}

int digit(int x){
	//x????????°?????????
	int i;
	for (i=0;x>0;i++){
		x/=10;
	}
	return i;
}