#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>

using namespace std;

struct node{
    node(){
		parent=-1;
		depth=0;
		s=-1;
	}
	void set(const int c1,const int c2){
		leaf.first=c1;
		leaf.second=c2;
	}
	int s;
	int height;
	int parent;
	int depth;
	//vector<int> leaf;
	pair<int,int> leaf;
};

int dp(int id);

node dnode[100000];

string spe,si,spo;

int main()
{
	int N,id,c1,c2;
	queue<int> que;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>id>>c1>>c2;
		dnode[id].set(c1,c2);
	}
	//*
	for(int i=0;i<N;i++){
		if(dnode[i].leaf.first!=-1){
			dnode[dnode[i].leaf.first].parent=i;
			if(dnode[i].leaf.second!=-1){
				dnode[dnode[i].leaf.second].s=dnode[i].leaf.first;
				dnode[dnode[i].leaf.first].s=dnode[i].leaf.second;
			}
		}
		if(dnode[i].leaf.second!=-1){
			dnode[dnode[i].leaf.second].parent=i;
		}
	}//*/
	for(int i=0;i<N;i++){
		if(dnode[i].parent==-1){
			dp(i);
			break;
		}
	}//*/
	cout<<"Preorder"<<endl;
	cout<<spe<<endl;
	cout<<"Inorder"<<endl;
	cout<<si<<endl;
	cout<<"Postorder"<<endl;
	cout<<spo<<endl;
}
int dp(int id)
{
    char dstr[101];
    sprintf(dstr," %d",id);
    spe+=dstr;
	if(dnode[id].leaf.first!=-1){
		dp(dnode[id].leaf.first);
	}
	sprintf(dstr," %d",id);
    si+=dstr;
    if(dnode[id].leaf.second!=-1){
		dp(dnode[id].leaf.second);
	}
	sprintf(dstr," %d",id);
    spo+=dstr;
    return id;
}