#include <iostream>
using namespace std;

int n;
string s;
int le,ri,cnt,pos;
int main(){
	while(1){
		cin >> n;
		if(n==0)break;
		pos=cnt=le=ri=0;
		for(int i=0;i<n;i++){
			cin >>s;
			if(s=="lu"){
				le=1;
				if(le&&ri&&!pos){
					pos=1;
					cnt++;
				}
			}else if(s=="ru"){
				ri=1;
				if(le&&ri&&!pos){
					pos=1;
					cnt++;
				}
			}else if(s=="ld"){
				le=0;
				if(!(le||ri)&&pos){
					pos=0;
					cnt++;
				}
			}else if(s=="rd")
				ri=0;
				if(!(le||ri)&&pos){
					pos=0;
					cnt++;
				}
		}
		cout << cnt<<endl;

	}
	return 0;
}