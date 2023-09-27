#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
static const int MAX =1000001;
static const int INF = 1500000;
int Min[MAX]; //memo for speeding things up
int odd[MAX]; // same

// this is the improved version to 1167.cpp
void memo(){
   /*
     Same as problem 17.1 in the book Algo and Data Struct
     http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A

    */

    /*
      Made the program substantially faster by making a memo of two different array with one loop

      

     */
    
    Min[0]=0;
    Min[1]=1;
    odd[0]=0;
    odd[1]=1;
    int i,j;
    for(i=0;i<MAX;i++){
	for(j=1;j<MAX;j++){
	    int b=(j*(j+1)*(j+2))/6;
	    if (i+b>MAX)break;
	    Min[i+b]=min(Min[i+b],Min[i]+1);
	    if(b%2){
		odd[i+b]=min(odd[i+b],odd[i]+1);
	    }
	 }
     }
 }


 int main(){
     int n;

     int i;
     memset(Min,INF,sizeof(Min));
     memset(odd,INF,sizeof(odd));
     memo();
    

    while(1){
	cin >>n;
	if(n==0)break;

	cout << Min[n] << " " << odd[n] << endl;
    }

    return 0;
}