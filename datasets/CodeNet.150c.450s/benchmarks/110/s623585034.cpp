#include <cstdio>
#include <cstdlib>
#include <queue>

char map[1000][1000];
int check[1000][1000];
int cx[10];
int cy[10];

int main(){
	int i,j,k,l,h,w,ch,pd=0;
	int tex,tey,ted;
	std::queue<int> qx;
	std::queue<int> qy;
	std::queue<int> qd;

	scanf("%d %d %d",&h,&w,&ch);
	scanf("%c",&map[0][0]);
	for(i=0;i<h;i++){
		for(j=0;j<=w;j++){
			scanf("%c",&map[i][j]);
			if(map[i][j]=='S'){cy[0]=i; cx[0]=j;}
			if(map[i][j]=='1'){cy[1]=i; cx[1]=j;}
			if(map[i][j]=='2'){cy[2]=i; cx[2]=j;}
			if(map[i][j]=='3'){cy[3]=i; cx[3]=j;}
			if(map[i][j]=='4'){cy[4]=i; cx[4]=j;}
			if(map[i][j]=='5'){cy[5]=i; cx[5]=j;}
			if(map[i][j]=='6'){cy[6]=i; cx[6]=j;}
			if(map[i][j]=='7'){cy[7]=i; cx[7]=j;}
			if(map[i][j]=='8'){cy[8]=i; cx[8]=j;}
			if(map[i][j]=='9'){cy[9]=i; cx[9]=j;}
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<=w;j++)check[i][j]=0;
	}

	i=0;
	while(i<ch){
		qx.push(cx[i]); qy.push(cy[i]); qd.push(0);
		++i;
		while(!qx.empty()){
			tex=qx.front(); tey=qy.front(); ted=qd.front();
			qx.pop(); qy.pop(); qd.pop();
			check[tey][tex]=1;
			if(tey==cy[i] && tex==cx[i]){
				pd+=ted;
				while(!qx.empty())qx.pop();
				while(!qy.empty())qy.pop();
				while(!qd.empty())qd.pop();
				for(k=0;k<h;k++){
					for(l=0;l<=w;l++)check[k][l]=0;
				}
				break;
			}
			++ted;
			if(tex+1<w && map[tey][tex+1]!='X' && check[tey][tex+1]==0){
				check[tey][tex+1]=1;
				qx.push(tex+1); qy.push(tey); qd.push(ted);
			}
			if(tex-1>=0 && map[tey][tex-1]!='X' && check[tey][tex-1]==0){
				check[tey][tex-1]=1;
				qx.push(tex-1); qy.push(tey); qd.push(ted);
			}
			if(tey+1<h && map[tey+1][tex]!='X' && check[tey+1][tex]==0){
				check[tey+1][tex]=1;
				qx.push(tex); qy.push(tey+1); qd.push(ted);
			}
			if(tey-1>=0 && map[tey-1][tex]!='X' && check[tey-1][tex]==0){
				check[tey-1][tex]=1;
				qx.push(tex); qy.push(tey-1); qd.push(ted);
			}
		}
	}

	printf("%d\n",pd);
	return 0;
}