#include<bits/stdc++.h>
using namespace std;
 
 int c[4001][4001]{};
signed main(){
    int n;
    scanf("%d",&n);
    char a[5000];
char b[5000];
    for(int m=0;m<n;m++){
	scanf("%s%s",a,b);
int d,e;
d=strlen(a);
e=strlen(b);
for(int t=0;t<=d;t++){
    for(int w=0;w<=d;w++)c[t][w]=0;
    }
for(int x=0;x<d;x++){
    for(int y=0;y<e;y++){
	if(a[x]==b[y])c[x+1][y+1]=c[x][y]+1;
	else c[x+1][y+1]=max(c[x][y+1],c[x+1][y]);
	}
    }
    printf("%d\n",c[d][e]);
	}
}