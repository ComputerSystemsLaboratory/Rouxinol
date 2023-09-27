#include <iostream>
#include<stdio.h>
using namespace std;
template<class T>
struct bsNode
{
	T data;
	bsNode<T> *left;
	bsNode<T> *right;
	bsNode<T> *parent;
	bsNode():left(0),right(0),parent(0){}
	bsNode(T tmp,bsNode<T> *tmpl = 0,bsNode<T> *tmpr = 0,bsNode<T> *tmpp = 0):data(tmp),left(tmpl),right(tmpr),parent(tmpp){}
	};

template <class T>
class tree
{
	private:
	bsNode<T> *first;
	public:
	tree():first(0)
	{}
	bool insert( T data )
	{
		bsNode<T> *tmpp = first;
		bsNode<T> *&tmp = tmpp;
		if(!first)
		{
		first = new bsNode<T>(data);		 
		return true;
			}
	  else
		{
		while(true){
			if(tmp->data<data)
			{
				if(tmp->right)
				tmp = tmp->right;
				else
				{
				tmp->right = new bsNode<T>(data);	
				return true;
					}				
				}
			else if(tmp->data>data)
				{
				if(tmp->left)
				tmp = tmp->left;
				else
				{
				tmp->left = new bsNode<T>(data);	
				return true;
				}				
				}
			else return false;
			}}}
		void pre( bsNode<T> *tmp )
		{
			if(!tmp)return;
			cout<<' '<<tmp->data;
			if(tmp->left)pre(tmp->left);
			if(tmp->right)pre(tmp->right);
			}

		void mid( bsNode<T> *tmp )
		{
			if(!tmp)return;
			if(tmp->left)mid(tmp->left);
			cout<<' '<<tmp->data;
			if(tmp->right)mid(tmp->right);
			}
		void print()
		{
			
			mid(first);
			cout<<endl;
			pre(first);	
			cout<<endl;
			}
	};
	
int main()
{
	char com[10];
	int m,tmp;
	tree<int> mark;
	cin>>m;
	while(m--){
		
		scanf("%s",com);
		if(com[0]=='i')
		{
			cin>>tmp;
			mark.insert(tmp);
			}
		else mark.print();
		
		}
	return  0;
}

