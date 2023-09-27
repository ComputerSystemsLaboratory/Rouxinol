#include<iostream>
using namespace std;
int main(){
	int time;
	int A,B;
	int carda,cardb;
	A=0;
	B=0;
	while(cin>>time&&time!=0){
		A=0;
		B=0;
		for(int i=0;i<time;++i){
			cin>>carda>>cardb;
			if(carda>cardb){
				A+=carda+cardb;
			}else if(carda<cardb){
				B+=carda+cardb;
			}else{
				A+=carda;
				B+=cardb;
			}
		}
		cout<<A<<' '<<B<<endl;
	}
	return 0;
}