#include<iostream>
#define MAX 1000000
using namespace std;
int ans1[MAX+10],ans2[MAX+10],box[300];
void tab_make(){
	for(int i=1;;i++){
		box[i]=(i*(i+1)*(i+2)/6);
	if(i*(i+1)*(i+2)/6>MAX)
		break;
	}
}
void ans_make(){
	ans1[0]=ans2[0]=0;
	for(int i=1;i<=MAX;i++){
		ans1[i]=ans2[i]=i;
		for(int j=1;i-box[j]>=0;j++){
			ans1[i]=min(ans1[i],ans1[i-box[j]]+1);
			if(box[j]%2==1)
			ans2[i]=min(ans2[i],ans2[i-box[j]]+1);
		}
	}
}
int main(){
	int x;
	tab_make();
	ans_make();
	while(cin>>x,x){
		cout<<ans1[x]<<' '<<ans2[x]<<endl;
	}
	return 0;
}