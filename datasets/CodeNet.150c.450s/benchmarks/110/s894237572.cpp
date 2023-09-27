#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

#define MAX 1000
int y[MAX][MAX];
int x[MAX][MAX];
int px[10];
int py[10];
bool z[MAX][MAX][5];
bool a[MAX][MAX];
int sum2;
int sum3;
int main(){
	memset(z,false,sizeof(z));
	char T[12]={'.','1','2','3','4','5','6','7','8','9','S','X'};
	int n,m,c,d,sum,f,g;
	string S;
	sum=0;
	cin>>n>>m>>c;
	for(int i=0;i<n;i++){
		cin>>S;
		for(int j=0;j<m;j++){
			for(int k=0;k<12;k++){
				if(S[j]==T[k]){
					x[i][j]=k;
					if(k==10){
						px[0]=i;
						py[0]=j;
					}
					if(k>=1 && k<=9){
						px[k]=i;
						py[k]=j;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			y[i][j]=-1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i>=1){
				if(x[i-1][j]!=11){
					z[i][j][1]=true;
				}
			}
			if(j>=1){
				if(x[i][j-1]!=11){
					z[i][j][2]=true;
				}
			}
			if(i<n-1){
				if(x[i+1][j]!=11){
					z[i][j][3]=true;
				}
			}
			if(j<m-1){
				if(x[i][j+1]!=11){
					z[i][j][4]=true;
				}
			}
		}
	}
	queue<int>R;
	for(int i=1;i<=c;i++){
		memset(a,false,sizeof(a));
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				y[j][k]=-1;
			}
		}
		while(!R.empty()){
			R.pop();
		}
		sum2=0;
		a[px[i-1]][py[i-1]]=true;
		if(z[px[i-1]][py[i-1]][1]==true){
			a[px[i-1]-1][py[i-1]]=true;
			y[px[i-1]-1][py[i-1]]=1;
			R.push((px[i-1]-1)*1000+py[i-1]);
			sum2++;
		}
		if(z[px[i-1]][py[i-1]][2]==true){
			a[px[i-1]][py[i-1]-1]=true;
			y[px[i-1]][py[i-1]-1]=1;
			R.push((px[i-1])*1000+(py[i-1]-1));
			sum2++;
		}
		if(z[px[i-1]][py[i-1]][3]==true){
			a[px[i-1]+1][py[i-1]]=true;
			y[px[i-1]+1][py[i-1]]=1;
			R.push((px[i-1]+1)*1000+py[i-1]);
			sum2++;
		}
		if(z[px[i-1]][py[i-1]][4]==true){
			a[px[i-1]][py[i-1]+1]=true;
			y[px[i-1]][py[i-1]+1]=1;
			R.push((px[i-1])*1000+(py[i-1]+1));
			sum2++;
		}
		d=0;
		while(y[px[i]][py[i]]==-1){
			sum3=0;
			d++;
			for(int j=1;j<=sum2;j++){
				f=R.front()/1000;
				g=R.front()%1000;
				if(z[f][g][1]==true && a[f-1][g]==false){
					a[f-1][g]=true;
					y[f-1][g]=d+1;
					R.push((f-1)*1000+g);
					sum3++;
				}
				if(z[f][g][2]==true && a[f][g-1]==false){
					a[f][g-1]=true;
					y[f][g-1]=d+1;
					R.push(f*1000+(g-1));
					sum3++;
				}
				if(z[f][g][3]==true && a[f+1][g]==false){
					a[f+1][g]=true;
					y[f+1][g]=d+1;
					R.push((f+1)*1000+g);
					sum3++;
				}
				if(z[f][g][4]==true && a[f][g+1]==false){
					a[f][g+1]=true;
					y[f][g+1]=d+1;
					R.push(f*1000+(g+1));
					sum3++;
				}
				R.pop();
			}
			sum2=sum3;
		}
		sum += y[px[i]][py[i]];
	}
	cout<<sum<<endl;
	return 0;
}