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
	struct node *prev,*next;
}node;

node *head=NULL,*tail=NULL;

node *newNode(int x)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->prev=NULL;
	tmp->next=NULL;
	tmp->x=x;
	return tmp;
}

void push(int x)
{
	node *poi=newNode(x);
	if(head==NULL && tail==NULL)
	{
		head=tail=poi;
		return;
	}
	
	head->prev=poi;
	poi->next=head;
	head=poi;
	tail->next=NULL;
	
}

void popHead()
{
	if(head==NULL && tail==NULL)
	return;
	
	if(head==tail)
	{
		free(head);
		head=tail=NULL;
		return;
	}
	
	head=head->next;
	free(head->prev);
	head->prev=NULL;
}

void popTail()
{
	if(head==NULL && tail==NULL)
	return;
	
	if(head==tail)
	{
		free(head);
		head=tail=NULL;
		return;
	}
	
	tail=tail->prev;
	free(tail->next);
	tail->next=NULL;
}

void popMid(int x)
{
	if(head==NULL && tail==NULL)
	return;
	
	node *poi=head;
	while(poi!=NULL)
	{
		if(poi->x==x)
		{
			if(poi==head)
			{
				popHead();
				return;
			}
			if(poi==tail)
			{
				popTail();
				return;
			}
			poi->prev->next=poi->next;
			poi->next->prev=poi->prev;
			free(poi);
			return;
		}
		poi=poi->next;
	}	
}

void show()
{
	node *poi=head;
	if(head==NULL && tail==NULL)
	return;
	
	printf("%d",poi->x);
	poi=poi->next;
	while(poi!=NULL)
	{
		printf(" %d",poi->x);
		poi=poi->next;
	}
	newline;
	//newline;
}

int main()
{
	VERNIY;
	scd(hbk);
	char a[200];
	forin(i,0,hbk)
	{
		//show();
		scanf("%s",a);
		//debugd(a);
		if(strcmp(a,"delete")==0)
		{
			scd(ver);
			//debugd(ver);
			popMid(ver);
			continue;
		}
		if(strcmp(a,"insert")==0)
		{
			scd(ver);
			push(ver);
			//debugd(ver);
			continue;
		}
		if(strcmp(a,"deleteFirst")==0)
		{
			popHead();
			continue;
		}
		if(strcmp(a,"deleteLast")==0)
		{
			popTail();
			continue;
		}
	}
	show();

	return 0;
}

/*
    ???????????????????????????????????????¢??I
    ???????????????????\??????????????±??????????????????????I
*/