#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){
     int w[30];
     int line;
     int n;
     int a1,b1;
     for(int i = 0;i<30;i++){
	  w[i] = i+1;
     }
     cin >> line;
     cin >> n;
//     for(int i=0;i<line;i++){
//	  cout << w[i] << endl;
//     }
//     cout << endl;

     for(int i=0;i<n;i++){
	  scanf("%d,%d",&a1,&b1);
	  int m = w[a1-1];
	  w[a1-1] = w[b1-1];
	  w[b1-1] = m;
//	  for(int i=0;i<line;i++){
//	       cout << w[i] << endl;
//	  }
//	  cout << endl;
     }

     for(int i=0;i<line;i++){
	  cout << w[i] << endl;
     }
     return 0;
}