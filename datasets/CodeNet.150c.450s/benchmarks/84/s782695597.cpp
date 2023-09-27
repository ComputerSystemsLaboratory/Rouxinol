#include<iostream>

using namespace std;
long long int count(int l,int r);
long long int work[200000];
long long int a[200000];
int main(){
  int n;
  cin >> n;


  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  long long int ans=count(0,n);

  cout << ans << endl;
}

long long int count(int l,int r){



  if(r-l<3){
    if(a[r-1]<a[l]){
      long long int temp=a[l];
      a[l]=a[r-1];
      a[r-1]=temp;
      return 1;
    }else{
      return 0;
    }
  }else{
    int mid=(r+l)/2;

    long long int cl=count(l,mid);
    long long int cr=count(mid,r);
    int s=0;
    int t=0;

    long long int c=0;

    while(s<(mid-l) && t<(r-mid)){
      if(a[l+s]>a[mid+t]){
	work[s+t]=a[mid+t];
	c+=mid-l-s;
	t++;
      }else{
	work[s+t]=a[l+s];
	s++;
      }
    }
    while(l+s<mid){work[s+t]=a[l+s];s++;}
    while(mid+t<r){work[s+t]=a[mid+t];t++;}
    for(int i=0;i<r-l;i++){
      a[l+i]=work[i];
    }
    return cl+cr+c;
  }
}