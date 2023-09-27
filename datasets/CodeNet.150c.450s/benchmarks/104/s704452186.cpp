#include <iostream> 
using namespace std;

int main(){
	int n,w,ans[31],from,to;
	char com;
	cin>>w>>n;
	for(int i=1;i<=w;i++){
		ans[i]=i;
	}
	for(int i=0;i<n;i++){
		cin>>from>>com>>to;
		int tmp=ans[from];
		ans[from]=ans[to];
		ans[to]=tmp;
	}
	for(int i=1;i<=w;i++){
		cout<<ans[i]<<endl;
	}
    return 0;
}