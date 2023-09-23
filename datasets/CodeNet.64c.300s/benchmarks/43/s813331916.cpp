#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

#define rep(i,j) for(int i=0;i<(j);i++)

using namespace std;

typedef pair<int,int> pii;

int main(){
	int a,b[2]={0};
	rep(i,2)rep(j,4){
	    scanf("%d",&a);
	    b[i]+=a;
    }
	printf("%d\n",max(b[0],b[1]));
	return 0;
}