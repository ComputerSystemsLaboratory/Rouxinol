#include<bits/stdc++.h> 
using namespace std;

int main(){
	int i,n,j,k,cur=0,total=0;
	char a[20001];
	int area[10000];
	stack<int> s;
	stack<pair<int,int> > scur;
	scanf("%s",a);
	int cua=0;
	int flag=1;
	int l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]=='\\'){
			s.push(i);
		}
		if(a[i]=='/' && s.size()){
			j=s.top();
			n = i-s.top();
			total+=n;
			s.pop();
			while(scur.size() && scur.top().first > j){
				n+=scur.top().second;
				scur.pop();
			}
			scur.push(make_pair(j,n));
		}
	}
	j=scur.size();
	printf("%d\n%d",total,j);
	for(i=0;i<j;i++){
		area[i]=scur.top().second;
		scur.pop();
	} 
	for(i--;i>=0;i--){
		printf(" %d",area[i]);
	}
	printf("\n");
}
