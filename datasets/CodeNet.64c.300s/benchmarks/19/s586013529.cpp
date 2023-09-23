#include<iostream>
using namespace std;
int main(){
  int count,max,i,j,k,l;
   int sum,data_set[5000];
  while(cin>>count){
    if(!count)break;
    cin>>data_set[0];
    max=data_set[0];
    for( i=1;i<count;i++){
      cin>>data_set[i];
    }
    //  for(l=1;l<=count;l++){
      for( j=0;j<count;j++){
	sum=0;
	for( k=j;k<count;k++){
	  sum+=data_set[k];
	if(max<sum)max=sum;
	}
    }
    cout<<max<<endl;
  }
}