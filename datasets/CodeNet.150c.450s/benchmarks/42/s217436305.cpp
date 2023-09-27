//CPU的循环调度：多个任务排成一列，每个任务最多被处理 q ms(时间片），
//如果 q ms之后任务尚未完成，那么该任务将被移动至队伍最末尾，
//CPU随即开始处理下一个任务
#include<iostream>
using namespace std;

#define maxx 100005
typedef struct node{
	char name[100];
	int time;
}p;
p queue[maxx];

int head,tail;
int cnt=0;
void enqueue(p qq)
{
	queue[tail]=qq;
	//queue[tail].name=qq.name;
	//queue[tail].time=qq.time;
	tail=(tail+1)%maxx;
}

p dequeue()
{
	p ttq=queue[head];
	head=(head+1)%maxx;
	return ttq;
}

bool isEmpty()
{
	return tail==head;
}

//为区分满与空，规定head与tail相隔一个空位为队列满 
 
bool ifFull()
{
	return head==(tail+1)%maxx;
}

int main()
{
	head=0;
	tail=0;
	int n,q;
	cin>>n>>q;
	p ttt;
	for(int i=0;i<n;i++)
	{
		cin>>ttt.name>>ttt.time;
		enqueue(ttt);
		//cout<<head<<" "<<tail;
	}
	while(!isEmpty())
	{
		p qq=dequeue();
		
		if(qq.time<=q)
		{
			//cout<<"...."<<endl;
			cnt+=qq.time;
			cout<<qq.name<<" "<<cnt<<endl;
		
			
		}
		else
		{
			//cout<<"!!!!"<<endl;
			cnt+=q;
			qq.time-=q;
			enqueue(qq);
		}
		//cout<<head<<" "<<tail<<endl;
	}
	return 0;
}
