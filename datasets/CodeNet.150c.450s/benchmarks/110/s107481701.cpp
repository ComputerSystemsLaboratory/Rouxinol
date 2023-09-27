#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

#define sf scanf
#define pf printf
#define pb push_back
#define lb lower_bound
#define forr(i,x,y) for(int i=x;i<=y;i++)
#define ford(i,x,y) for(int i=x;i>=y;i--)

const int inf=0x7f7f7f,mod=100000000;

inline void read(int &input) {
	int value=0,sign=1;
	char ch;
	do {
		ch=getchar();
		if(ch=='-') sign*=-1;
	}while(ch<'0'||ch>'9');
	while(ch>='0'&&ch<='9') {
		value=value*10+ch-'0';
		ch=getchar();
	}
	input=value*sign;
}

inline void read(int *input,int begin,int end) {
	for(int i=begin;i<=end;i++)
		read(input[i]);
}

inline void read(int &input1,int &input2) {
	read(input1),read(input2);
}

inline void read(int &input1,int &input2,int &input3) {
	read(input1,input2),read(input3);
}

inline void read(int &input1,int &input2,int &input3,int &input4) {
	read(input1,input2),read(input3,input4);
}

int h,w,n,ans;
char mp[1008][1008];
bool passed[1008][1008];
struct node{
    int r,c,res;
}que[1000000];
int head=0,tail=1;
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

void bfs(char ch) {
	head=0,tail=1;
	que[0].res=0;
    passed[que[0].r][que[0].c]=1;
    while(head!=tail) {
        node Head=que[head];
        forr(i,0,3) {
            node Tail=Head;
            Tail.r+=x[i];
            Tail.c+=y[i];
            Tail.res++;
            if(Tail.r<=0||Tail.c<=0||Tail.r>h||Tail.c>w) continue;
            if(mp[Tail.r][Tail.c]=='X'||passed[Tail.r][Tail.c]) continue;
            que[tail++]=Tail;
            passed[Tail.r][Tail.c]=1;
            if(mp[Tail.r][Tail.c]==ch) {
                ans+=Tail.res;
                que[0].r=Tail.r;
                que[0].c=Tail.c;
            }
        }
        head++;
    }
}

int main() {
	read(h,w,n);
	forr(i,1,h) {
		sf("%s",mp[i]+1);
		forr(j,1,w)
			if(mp[i][j]=='S')
				que[0].r=i,que[0].c=j;
	}
	forr(i,1,n)
        memset(passed,0,sizeof passed),
		bfs('0'+i);
	cout<<ans<<endl;
	return 0;
}

