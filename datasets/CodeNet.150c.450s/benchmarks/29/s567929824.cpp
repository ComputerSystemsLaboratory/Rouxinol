#include<cstdio>
#include<string>
#include<list>
using namespace std;
list<int>L;
int main()
{
	int N;
	int d;
	char command[20];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
	   scanf("%s",command);
	   if(command[0]=='i'){
		   scanf("%d",&d);
		   L.push_front(d);
	   }

	   else if(command[6]=='F'){
		   L.pop_front();
	   }
	   else if(command[6]=='L'){
		   L.pop_back();
	   }
	    else if(command[0]=='d'){
		   scanf("%d",&d);
		   for(list<int>::iterator it=L.begin();it!=L.end();it++)
		   {
			   if(d==*it){
				   L.erase(it);
				   break;
			   }
		   }
	   }
	}
	int i=0;
	for(list<int>::iterator it=L.begin();it!=L.end();it++){
		if(i++)printf(" ");
		printf("%d",*it);
	}
	printf("\n");
	return 0;
}