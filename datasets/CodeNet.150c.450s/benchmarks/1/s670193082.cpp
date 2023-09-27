#include <iostream>

using namespace std;

bool ok(int P);

int main(){

  int start,end,mid,n;
  cin >> n;
  long long int a[n];
  int ans=1;
  long long int lis[100000];
  cin >> lis[0];
  for(int i=1;i<n;i++){
    cin >> a[i];
    if(lis[ans-1]<a[i]){
      lis[ans]=a[i];
      ans++;
    }else if(lis[ans-1]>a[i]){
      start=0;
      end=ans-1;
      mid=end/2;

      while(end-start!=0){
	if(lis[mid]>a[i]){
	  end=mid;
	}else if(lis[mid]<a[i]){
	  start=mid+1;
	}else{
	  end=-1;
	  break;
	}
	mid=(start+end)/2;
      }
      if(end!=-1){
	lis[end]=a[i];	  
      }
    }
  }

  cout << ans << endl;
}