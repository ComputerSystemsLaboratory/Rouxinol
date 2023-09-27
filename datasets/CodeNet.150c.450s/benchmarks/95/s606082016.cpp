#include <iostream>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int main(){
	int oi=0;
	while(true){
		int fl;
		cin >> fl;			if(!fl) return 0;
		int re=0;
		bool l=false;		//true==upped, false=downed
		bool r=false;
		bool p=false;		//chokuzen no ryouashi sorotta noga
		REP(fi,fl){
			string fc;
			cin>>fc;
			if(fc=="lu") l=true;
			if(fc=="ld") l=false;
			if(fc=="ru") r=true;
			if(fc=="rd") r=false;
			if(l==r){
				if(p!=l){
					re++;
					p=l;
				}
			}
		}
		cout<<re<<endl;//("<<oi++<<")";
	}
}