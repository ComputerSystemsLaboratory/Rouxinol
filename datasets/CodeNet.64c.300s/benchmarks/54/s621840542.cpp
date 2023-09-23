#include<iostream>
#include<math.h>
using namespace std;
long number[101];
long numbers[101][21][50];
int N;
int last;
int main(void){

   
  cin >> N;
  N-=1;
  for (int i=0;i<N;i++){
    cin >> number[i];
  }
  cin >> last;
  numbers[0][number[0]][0]=1;
  for(int k=0;k<50;k++){
    for(int i=1;i<N;i++){
      for(int j=0;j<=20;j++){
	if(j+number[i]>=0 && j+number[i] <=20 && numbers[i-1][j][k]!=0){
	  numbers[i][j+number[i]][k]+=numbers[i-1][j][k]%1000000;
	  numbers[i][j+number[i]][k+1]+=numbers[i-1][j][k]/1000000;
	  // cout << i <<" " << j+number[i]<<" "<< j << " " <<numbers[i-1][j][k]<< endl;
	}
	if(j-number[i]>=0 && j-number[i] <=20 && numbers[i-1][j][k]!=0){
	  numbers[i][j-number[i]][k]+=numbers[i-1][j][k]%1000000;
	  numbers[i][j-number[i]][k+1]+=numbers[i-1][j][k]/1000000;
	  // cout << i <<" " << j-number[i]<<" "<< j << " " <<numbers[i-1][j][k]<< endl;
	}
      }
    }
  }
  int checker=0;
  int value;
  for(int k=50;k>=0;k--){

    if(numbers[N-1][last][k]!=0){
      for(int i=1;i<=6;i++){
	value=( (numbers[N-1][last][k]%1000000)+(numbers[N-1][last][k-1]/1000000))%(long)pow(10,7-i)/(long)pow(10,6-i);
	if(checker==1||value!=0){
	cout << value;
	checker=1;
	}
      }
      //  cout << (numbers[N-1][last][k]%1000000)+(numbers[N-1][last][k-1]/1000000);
      /*	if(numbers[N-1][last][k-1]%1000000<10000 && k!=0)// && k-1==0)
	  {
	  	cout << 0 ;
	  }  
      */
 }
  }
  cout<<endl;
  return 0;
}