/*
    ???????????????????????????????????????¢??I
    ???????????????????\??????????????±??????????????????????I
*/

#define VERNIY st();int ver=0,niy=0,hbk=0

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <float.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <vector>
#include <map>
#include <queue>
#include <utility>
#include <functional>
#define LLU unsigned long long int
#define LL long long int
using namespace std;
#define Lfmax DBL_MAX
#define LLUmax ULLONG_MAX
#define LLmax LLONG_MAX
#define dmax INT_MAX
#define vd vector<int>
#define vpd vector<pair<int,int>>
#define vLL vector<long long int>
#define vpLL vector<pair<long long int,long long int>>
#define vLLU vector<unsigned long long int>
#define vpLLU vector<pair<unsigned long long int,unsigned long long int>>
#define pd pair<int,int>
#define pLL pair<long long int,long long int>
#define pLLU pair<unsigned long long int,unsigned long long int>
#define qd queue<int>
#define qpd queue<pair<int,int>>
#define maxpqd priority_queue<int>
#define minpqd priority_queue<int, vector<int>, greater<int>>
#define fr front
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define debugarr(a,b) for(int i=0 ; i<b ; i++)printf("%d ",a[i]);printf("\n")
#define newline printf("\n")
#define forin(a,b,c) for(int a=b ; a<c ; ++a)
#define forineq(a,b,c) for(int a=b ; a<=c ; ++a)
#define forde(a,b,c) for(int a=b ; a>=c ; --a)
#define UPC(oo) (oo>='A' && oo<='Z')
#define LWC(oo) (oo>='a' && oo<='z')
#define DGT(oo) (oo>='0' && oo<='9')
#define UPCVOC(oo) (oo=='A' || oo=='E' || oo=='I' || oo=='U' || oo=='O')
#define LWCVOC(oo) (oo=='a' || oo=='e' || oo=='i' || oo=='u' || oo=='o')
#define filein freopen("in.txt","r",stdin);
#define fileout freopen("out.txt","w",stdout);
#define setarr(a,b,c) memset(a,b,sizeof(c))

inline void scd(int &a){scanf("%d",&a);}
inline void scdd(int &a,int &b){scanf("%d %d",&a,&b);}
inline void sctd(int &a,int &b,int &c){scanf("%d %d %d",&a,&b,&c);}
inline void sctlld(LL &a,LL &b,LL &c){scanf("%I64d %I64d %I64d",&a,&b,&c);}
inline void scdlld(LL &a,LL &b){scanf("%I64d %I64d",&a,&b);}
inline void sclld(LL &a){scanf("%I64d",&a);}
inline void scllu(LLU &a){scanf("%I64u",&a);}
inline void scdllu(LLU &a,LLU &b){scanf("%I64u %I64u",&a,&b);}
inline void sctllu(LLU &a,LLU &b,LLU &c){scanf("%I64u %I64u %I64u",&a,&b,&c);}

template<class Ver>
inline void prd(Ver a){cout<<a<<"\n";};
template<class Ver>
inline void prdd(Ver a,Ver b){cout<<a<<" "<<b<<"\n";};
template<class Ver>
inline void prtd(Ver a, Ver b, Ver c){cout<<a<<" "<<b<<" "<<c<<"\n";};

inline void debug(){printf("asd\n");}
template<class Ver>
inline void debugd(Ver a){cout<<"--- "<<a<<endl;};
template<class Ver>
inline void debugdd(Ver a,Ver b){cout<<"--- "<<a<<" "<<b<<endl;};
template<class Ver>
inline void debugtd(Ver a,Ver b,Ver c){cout<<"--- "<<a<<" "<<b<<" "<<c<<endl;};

#define grav 9.8
#define pi 3.14159265

void st()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
}

typedef struct node
{
	int x;
	struct node *left,*right;
}node;

node *newNode(int x)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->left=NULL;
	tmp->right=NULL;
	tmp->x=x;
	//prd(sizeof(tmp));
	return tmp;
}

node *insert(node *root,int x)
{
	//prd(x);
	if(root==NULL)
	return newNode(x);
	
	if(x<=root->x)
	root->left=insert(root->left,x);
	if(x>=root->x)
	root->right=insert(root->right,x);
	
	return root;
}	

void inorderTraversal(node *root)
{
	if(root==NULL)
	return;
	if(root->left!=NULL)
	inorderTraversal(root->left);
	printf(" %d",root->x);
	if(root->right!=NULL)
	inorderTraversal(root->right);
}

void preorderTraversal(node *root)
{
	if(root==NULL)
	return;
	printf(" %d",root->x);	
	if(root->left!=NULL)
	preorderTraversal(root->left);
	if(root->right!=NULL)
	preorderTraversal(root->right);
}

int search(node *root,int x)
{
	if(root->x==x)
	return 1;
	
	if(root->left!=NULL && x<root->x)
	return search(root->left,x);
	if(root->right!=NULL && x>root->x)
	return search(root->right,x);
	
	return 0;
}

int main()
{
	VERNIY;
	//printf("%d\n",sizeof(node));
	scd(hbk);
	char a[200];
	node *root=NULL;
	forin(i,0,hbk)
	{
		scanf("%s",a);
		if(strcmp(a,"insert")==0)
		{
			scd(ver);
			root=insert(root,ver);
			continue;
		}
		if(strcmp(a,"find")==0)
		{
			scd(ver);
			niy=search(root,ver);
			if(niy==1)
			printf("yes\n");
			if(niy==0)
			printf("no\n");
			continue;
		}
		if(strcmp(a,"print")==0)
		{
			inorderTraversal(root);
			newline;
			preorderTraversal(root);
			newline;
		}
	}

	return 0;
}