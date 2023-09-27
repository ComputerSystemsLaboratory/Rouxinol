#include<iostream>
#include<cctype>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
const int inf=0x7fffffff;
typedef long long int ll;
using namespace std;
char w[21]=" ";
char t[1000+10];
char tt[1000+1000];
char eof[]="END_OF_TEXT";
void turn(){
	int i=0;
	while(tt[i]!='\0'){tt[i]=tolower(tt[i]);i++;}
}
int main()
{
//#ifdef DEBUG
//	freopen("in", "r", stdin);
////	freopen("out", "w", stdout);
//#endif
	scanf("%s", t);
	//cout<<t<<endl;
	strcat(w,t);
	strcat(w," ");
	//cout<<w<<endl;
	int cnt=0;
	memset(t,0,sizeof(t));
	memset(tt,0,sizeof(tt));
	while(fgets(t,sizeof(t),stdin)!=NULL){
//cout<<t<<endl;
		if(!strcmp(w,eof))break;
		strcat(tt,".");
		strcat(tt,t);
		strcat(tt,".");
	}
	for(int i=0;tt[i]!='\0';i++){
		if(tt[i]=='.'||tt[i]=='\n')tt[i]=' ';
	}
	turn();
	char *cur=tt+1;
	char *tmp;
	//cout<<tt<<endl;
	while(1){
		tmp=strstr(cur,w);
		if(!tmp)break;
		cur=tmp+1;
	//	cout<<*cur<<endl;
//		while(*cur!='\0'&&isalpha(*cur))cur++;
		cnt++;
	//	cout<<cur-tt<<endl;
	}
	printf("%d\n", cnt);
	//insert code
	return 0;
}
//1_9_a.cc