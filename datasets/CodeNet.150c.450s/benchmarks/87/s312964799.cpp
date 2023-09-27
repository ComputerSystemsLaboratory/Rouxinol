#include <iostream>
using namespace std;
static const int N = 10;
int main(){
  int H,i,j,k,l,com,cnt,start,score,flag;//com=compare
  char c;
  string str[N],cp[N];
  while(1){
    score=0;
    cin >> H;
    if(H==0) break;
    for(i=0;i<H;i++){
      str[i]="";
      for(j=0;j<5;j++){
	cin >> c;
	str[i]+=c;
      }
    }
    while(1){
      for(i=0;i<H;i++){
	cnt=0;
	com=str[i][0];
	start=0;
	for(j=0;j<5;j++){
	  if(com==str[i][j]) cnt++;
	  else{
	    if(cnt>=3){
	      if(com!='e'){
		score+=cnt*(com-'0');
	      }
	      for(k=start;k<=j-1;k++){
		str[i][k]='e';//e=end
	      }
	      com=str[i][j];
	      start=j;
	      cnt=1;
	    }else{
	      com=str[i][j];
	      start=j;
	      cnt=1;
	    }
	  }
	}
	if(cnt>=3){
	  if(com!='e'){
	    score+=cnt*(com-'0');
	  }
	  for(k=start;k<=j;k++){
	    str[i][k]='e';//e=end
	  }
	}
      }
      for(i=0;i<5;i++){
	for(j=H-1;j>=0;j--){
	  if(j-1>=0&&str[j][i]=='e'){
	    l=j;
	    while(1){
	      l--;
	      if(l==-1) break;
	      if(str[l][i]!='e'){
		str[j][i]=str[l][i];
		str[l][i]='e';
		break;
	      }
	    }
	  }
	}
      }
      flag=0;
      for(i=0;i<H;i++) if(cp[i]!=str[i]) flag=1;
      if(flag==0) break;
      for(i=0;i<H;i++) cp[i]=str[i];
    }
    cout << score << endl;
  }
  return 0;
}