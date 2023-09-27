#include<iostream>
#include<cstring>
using namespace std;
const int MAXN = 25+5;
struct tre{
	int fa,le,ri;
}tr[MAXN];
int n,rot;
void init(){
	memset(tr,-1,sizeof(tr));
	cin>>n;
	for(int i=0;i<n;i++){
		int id,left,right;
		cin>>id>>left>>right;
		tr[id].le=left;
		tr[id].ri=right;
		if(left!=-1) tr[left].fa=id;
		if(right!=-1) tr[right].fa=id;
	}
	for(int i=0;i<n;i++)
	    if(tr[i].fa==-1){
	    	rot=i;
	    	break;
	    } 
}
void qx(int x){
	if(x==-1) return;
	cout<<' '<<x;
	qx(tr[x].le);
	qx(tr[x].ri);
}
void zx(int x){
	if(x==-1) return;
	zx(tr[x].le);
	cout<<' '<<x;
	zx(tr[x].ri);
}
void hx(int x){ 
    if(x==-1) return;
    hx(tr[x].le);
	hx(tr[x].ri);
	cout<<' '<<x;
}
void sol(){
	cout<<"Preorder"<<endl;
	qx(rot);
	cout<<endl<<"Inorder"<<endl;
	zx(rot);
	cout<<endl<<"Postorder"<<endl;
	hx(rot);
	cout<<endl;
}
int main(){
	init();
	sol();
	return 0;
}