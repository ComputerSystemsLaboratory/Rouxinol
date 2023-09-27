#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,p;
  vector<int> person(50);


  while(1){
    int i=0;
    cin>>n>>p;
    if(n==0&&p==0)break;
    for(int i=0;i<n;i++)person[i]=0;
    
    while(1){
      int flag=0;
      if(p!=0){ 
	person[i]+=1;
	p--;
      }else if(p==0&&person[i]>0){
	p=person[i];
	person[i]=0;
      }
      
      if(p==0){
	//	for(int k=0;k<n;k++) cout<<person[k];
	//	cout<<endl;
	//	cout<<flag<<endl;
	for(int j=0;j<n;j++){
	  if(person[j]>0){
	    flag++;
	  }
	  if(flag>1)break;
	}
      }

      if(flag==1)break;
      i++;
      if(i==n)i=0;  
    }
    cout<<i<<endl;
    
  }

  return 0;
}