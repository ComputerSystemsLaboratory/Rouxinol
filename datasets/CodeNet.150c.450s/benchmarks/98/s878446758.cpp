#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;

  while(1){
    
    int sum1=0;
    int sum2=0;
    
    cin >> n >> m;
    if(n + m == 0) break;

    int a[n],b[m];
    for(int i=0;i < n;i++){
      cin >> a[i];
      sum1 += a[i];
    }
    for(int i=0;i < m;i++){
      cin >> b[i];
      sum2 += b[i];
    }
    
    int card[2]={};
    int mini=201;
    int flag=0;
    
    for(int i=0;i < n;i++)
      {
	for(int j=0;j < m;j++){
	  
	  if( (sum1-a[i]+b[j]) == (sum2-b[j]+a[i]) && (a[i]+b[j]) < mini)
	    {
	      mini = a[i]+b[j];
	      card[0] = mini - b[j];
	      card[1] = mini - a[i];
	      flag = 1;
	    }
	}
      }
    if(flag == 1)
      {
	cout << card[0] << " " << card[1] << endl;
      }
    else
      {
	cout << -1 << endl;
      }
  }
  return 0;
}

