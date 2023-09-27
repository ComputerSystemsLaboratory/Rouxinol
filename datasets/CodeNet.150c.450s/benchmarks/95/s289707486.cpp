
#include <bits/stdc++.h>

using namespace std;

char stem[300];

int main(){
  while(1){
    int n;
    scanf("%d", &n);
    if(n==0) break;

    char step[300];
    int i;
    for(i=0;i<2*n;i+=2) cin >> stem[i] >> stem[i+1];
    
    int j, flag = 0, flagl = 0, flagr = 0, ans=0;
    for(j=0;j<n;j++){
      if(stem[2*j]=='l'){
	if(stem[2*j+1]=='u') flagl = 1;
	else if(stem[2*j+1]=='d') flagl = 0;
	else printf("e1\n");
      }
      if(stem[2*j]=='r'){
	if(stem[2*j+1]=='u') flagr = 1;
	else if(stem[2*j+1]=='d') flagr = 0;
	else printf("e2\n");
      }
      if(flag == 0){
	if(flagl==1&&flagr==1){
	  ans++;
	  flag=1;
	}
      }
      if(flag == 1){
	if(flagl==0&&flagr==0){
	  ans++;
	  flag=0;
	}
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}

