#include<iostream>
#include<deque>
#include<set>
using namespace std;

int main(){
	while(true){
		int n;
		deque< set<int> > x,y;
		set<int> inst;
		inst.insert(0);
		x.push_back(inst);
		y.push_back(inst);
		cin>>n;
		if(n==0)break;
		for(int i=1;i<n;i++){
			int tgt,dir;
			cin>>tgt>>dir;
			if(dir==0){
				if(x[0].find(tgt)!=x[0].end()){
					set<int> ins;
					ins.insert(i);
					x.push_front(ins);
				}else{
					for(int j=1;j<x.size();j++){
						if(x[j].find(tgt)!=x[j].end()){
							x[j-1].insert(i);
							break;
						}
					}
				}
			}else if(dir==2){
				if(x[x.size()-1].find(tgt)!=x[x.size()-1].end()){
					set<int> ins;
					ins.insert(i);
					x.push_back(ins);
				}else{
					for(int j=0;j<x.size()-1;j++){
						if(x[j].find(tgt)!=x[j].end()){
							x[j+1].insert(i);
							break;
						}
					}
				}
			}else{
				for(int j=0;j<x.size();j++){
					if(x[j].find(tgt)!=x[j].end()){
						x[j].insert(i);
					}
				}
			}
			if(dir==1){
				if(y[0].find(tgt)!=y[0].end()){
					set<int> ins;
					ins.insert(i);
					y.push_front(ins);
				}else{
					for(int j=1;j<y.size();j++){
						if(y[j].find(tgt)!=y[j].end()){
							y[j-1].insert(i);
							break;
						}
					}
				}
			}else if(dir==3){
				if(y[y.size()-1].find(tgt)!=y[y.size()-1].end()){
					set<int> ins;
					ins.insert(i);
					y.push_back(ins);
				}else{
					for(int j=0;j<y.size()-1;j++){
						if(y[j].find(tgt)!=y[j].end()){
							y[j+1].insert(i);
							break;
						}
					}
				}
			}else{
				for(int j=0;j<y.size();j++){
					if(y[j].find(tgt)!=y[j].end()){
						y[j].insert(i);
					}
				}
			}
		}
		cout<<x.size()<<' '<<y.size()<<endl;
	}
	return 0;
}