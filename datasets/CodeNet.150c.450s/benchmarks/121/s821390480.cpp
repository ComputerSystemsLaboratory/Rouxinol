#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
string str;
int h,w;
char a[105][105];
int reached[105][105];
int sum;
int i,j;
 
void search(int x,int y, char z)
{
     if(y<0 || w<=y || x<0 || h<=x || a[x][y]!=z)return;
     if(reached[x][y])return;
     reached[x][y]=1;
     search(x+1,y,z);
     search(x-1,y,z);
     search(x,y+1,z);
     search(x,y-1,z);  
}

int main()
{
 
  while(1){

    cin>>h>>w;
    if(h==0 && w==0)break;

    for(i=0;i<h;i++)
      for(j=0;j<w;j++)
	reached[i][j]=0;

    sum=0;

    for(i=0;i<h;i++){
      cin>>str;
      for(j=0;j<w;j++)
	a[i][j]=str[j];
    }

    for(i=0;i<h;i++)
      for(j=0;j<w;j++)
	if(reached[i][j]==0 && a[i][j]=='@'){
	  search(i,j,'@');
	  sum++;
	}
    for(i=0;i<h;i++)
      for(j=0;j<w;j++)
	if(reached[i][j]==0 && a[i][j]=='#'){
	  search(i,j,'#');
	  sum++;
	}
    for(i=0;i<h;i++)
      for(j=0;j<w;j++)
	if(reached[i][j]==0 && a[i][j]=='*'){
	  search(i,j,'*');
	  sum++;
	}

    cout<<sum<<endl;
  }//endwhile

}