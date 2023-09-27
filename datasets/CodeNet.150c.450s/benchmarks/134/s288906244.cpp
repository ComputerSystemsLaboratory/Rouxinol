#include <iostream>
#include <cstring>
using namespace std;

struct N {
	int id,l, r, p;
	void pre();
	void in();
	void post();
};

int n, root;
N T[25];

void N::pre()
{
	cout<<' '<<id;
	if(l!=-1)T[l].pre();
	if(r!=-1)T[r].pre();
}

void N::in()
{
	if(l!=-1)T[l].in();
	cout<<' '<<id;
	if(r!=-1)T[r].in();
}

void N::post()
{
	if(l!=-1)T[l].post();
	if(r!=-1)T[r].post();
	cout<<' '<<id;
}

int main()
{
	memset(T,-1,sizeof(T));
	cin >>n;
	for(int i=0;i<n;i++){
		int id, l, r;
		cin>>id>>l>>r;
		T[id].id=id;
		T[id].l=l;
		T[id].r=r;
		T[l].p=id;
		T[r].p=id;
	}
	for(int i=0;i<n;i++){
		if(T[i].p==-1) {
			root=i;
			break;
		}
	}
	
	cout<<"Preorder"<<endl;
	T[root].pre();
	cout<<endl;
	
	cout<<"Inorder"<<endl;
	T[root].in();
	cout<<endl;
	
	cout<<"Postorder"<<endl;
	T[root].post();
	cout<<endl;
}