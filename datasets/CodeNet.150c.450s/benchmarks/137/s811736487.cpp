#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int MAXT=1000003;
const int MAXN=1000010;
int n;
string s;
int head[1000003],nex[MAXN],to[MAXN],top,top1,ans[MAXN];
void input()
{
	cin>>n;
	memset(head,-1,sizeof(head));
	memset(nex,-1,sizeof(nex));
}

int jisuan(char c)
{
	if(c=='A') return 1;
	if(c=='C') return 2;
	if(c=='G') return 3;
	if(c=='T') return 4;
}

void insert(int k)
{
	nex[top]=head[k%MAXT];
	head[k%MAXT]=top;
	to[top++]=k;
}

int k(string ss)
{
	int s(1);
	int sum(0);
	for(int i=0;i<ss.size();i++)
	{
		sum+=s*jisuan(ss[i]);
		s*=5;
	}
	return sum;
}

bool ff(int k)
{
	int u=head[k%MAXT];
	while(u!=-1)
	{
		if(to[u]==k) return true;
		u=nex[u];
	}
	return false;
}

void xxj()
{
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s=="insert"){
			cin>>s;
			int tmp=k(s);
			insert(tmp);
		}
		else{
			cin>>s;
			int tmp=k(s);
			ans[top1++]=ff(tmp);
		}
	}
}

void output()
{
	for(int i=0;i<top1;i++)
	    if(ans[i]) cout<<"yes"<<'\n';
	    else cout<<"no"<<'\n';
}

int main()
{
	input();
	xxj();
	output();
	return 0;
}