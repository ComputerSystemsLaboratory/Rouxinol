#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

#define add push_back
#define inf 2147000000

#define rep(i,n) for(int i=0;i<n;i++)
#define out(a) cout<<a<<endl;

using namespace std;

int main(void){
	int w,h;
	int y1[30],y2[30],t[31];
	string str;
	scanf("%d%d",&w,&h);
	rep(i,h){
		cin>>str;
		int m;
		rep(j,4)if(str[j]==','){m=j;break;}
		
		switch(m){
			case 1:
				y1[i]=str[0]-48;
				break;
			case 2:
				y1[i]= (str[0]-48)*10;
				y1[i]+=str[1]-48;
				break;
		}
		if(str[m+2]!='\0'){
			y2[i] = (str[m+1]-48) * 10;
			y2[i] += str[m+2]-48;
		}else{
			
			y2[i] = str[m+1]-48;
		}
	}
	rep(i,31)t[i]=i;
	
	rep(i,h){
		swap(t[y1[i]],t[y2[i]]);
	}
	
	rep(i,w)out(t[i+1]);
}