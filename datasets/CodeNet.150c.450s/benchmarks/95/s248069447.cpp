#include<iostream>
#include<string>
using namespace std;

int srh[101];

void search(string str, int i){
  if(str=="ru")srh[i]=1;
  else if(str=="lu")srh[i]=2;
  else if(str=="rd")srh[i]=3;
  else if(str=="ld")srh[i]=4;
}

int main (){
  int n,count;
  int i;
  string step;

  while(1){
    count=0;
    cin >> n;
    if(n==0)break;
    for(i=0;i<n;i++){
      cin >> step;
      search(step,i);
    }

    for(i=0;i<n-1;i++){
      if(srh[i]==1){
	if(srh[i+1]==2){
	  count++;
	}
      }else if(srh[i]==2){
	if(srh[i+1]==1){
	  count++;
	}
      }else if(srh[i]==3){
	if(srh[i+1]==4){
	  count++;
	}
      }else if(srh[i]==4){
	if(srh[i+1]==3){
	  count++;
	}
      }		    
    }
    cout << count << endl;
  }
}