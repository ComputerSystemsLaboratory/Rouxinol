#include <iostream>
using namespace std;
int main()
{
  int n[20]={};
  int s[20][100]={};
  int answer[20]={};
  int MAX=-1,min=1001,jM=0,jm=0;
  int i=0,j=0;

  for(;;i++){
    cin >> n[i];//?????°??\???
    if(n[i]>=3&&n[i]<=100){
      for(MAX=-1,min=1001,j=0;j<n[i];j++){//?????°?¶??????????
	cin >> s[i][j];
	if(MAX<s[i][j]){//?????§????±???????
	  MAX=s[i][j];
	  jM=j;
	}
	if(min>s[i][j]){//????°??±???????
	  min=s[i][j];
	  jm=j;
	}
	answer[i]+=s[i][j];
      }
      
      answer[i]=(answer[i]-s[i][jM]-s[i][jm])/(n[i]-2);
    }else{
      break;
    }
  }
  for(i=0;n[i]>=3&&n[i]<=100;i++){//??????
    cout << answer[i] << endl;
  }
}