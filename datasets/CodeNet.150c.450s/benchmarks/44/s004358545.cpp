#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int a[10],b[10];
  int hit=0,blow=0;
  while(scanf("%d",&a[0])!=EOF){
    for(int i=1;i<4;i++){
      cin >> a[i];
    }
    for(int i=0;i<4;i++){
      cin >> b[i];
    }
    hit=0;
    blow=0;
    for(int i=0;i<4;i++){
      if(a[i]==b[i]){
	hit++;
      }
    }
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
	if(a[i]==b[j]){
	  blow++;
	}
      }
    }
    blow-=hit;
    cout << hit << " " << blow << endl;
  }
  return 0;
}