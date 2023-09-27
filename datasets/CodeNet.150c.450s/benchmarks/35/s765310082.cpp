#include<iostream>
#include<vector>
using namespace std;
int main(){
	int time,code;
	vector<int> line;
	long max;
	long doll=0;
	vector<int>::iterator he,he2;
	while(true){
		cin>>time;
		if(time!=0){
			line.clear();
		}else {
			break;
		}
		for(int i=0;i<time;++i){
			cin>>code;
			line.push_back(code);
		}
		max=line[0];
		for(he=line.begin();he!=line.end();++he){
			for(he2=he;he2!=line.end();++he2){
				doll+=*he2;
				if(doll>max){
					max=doll;
				}
			}
			doll=0;
		}
		cout<<max<<endl;
	}
	return 0;
}