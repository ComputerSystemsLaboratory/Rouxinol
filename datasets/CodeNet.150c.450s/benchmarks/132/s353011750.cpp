#include<iostream>
using namespace std;
int main(){
	int n,p,pre,box[60],now;
	while(cin>>n>>p,n||p){
		for(int i=0;i<n;i++)
			box[i]=0;
		pre=p;
		now=0;
		while(1){
			if(pre>0){
				box[now]++;
				if(box[now]==p)
					break;
				pre--;
			}else	if(pre==0){
				pre=box[now];
				box[now]=0;
			}
			now++;
			now%=n;
		}
		cout<<now<<endl;
	}
	return 0;
}