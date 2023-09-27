#include<iostream>
#define N 36
using namespace std;
int n,a[N],a1[N],a2[N];
char c[N],c1[N],c2[N];

void BubbleSort(){
  for(int i=0;i<n;i++)
    for(int j=n-1;j>=i+1;j--){
      if(a1[j]<a1[j-1]){
	int t=a1[j];
	a1[j]=a1[j-1];
	a1[j-1]=t;
	char t2=c1[j];
	c1[j]=c1[j-1];
	c1[j-1]=t2;
      }
    }
}

void SelectionSort(){
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(a2[j]<a2[minj]){
	minj=j;
      }
    }
    int t=a2[i];
    a2[i]=a2[minj];
    a2[minj]=t;
    char t2=c2[i];
    c2[i]=c2[minj];
    c2[minj]=t2;
  }
}

bool isStable(char *x,int *y){
  for(int i=1;i<=9;i++){
    int start=0;
    for(int j=0;j<n;j++){
      if(i!=a[j])continue;
      for(int k=start;k<n;k++){
	if(i!=y[k])continue;
	if(c[j]!=x[k])return false;
	start=k+1;
	break;
      }
    }
  }
  return true;
}

void output(char *x,int *y){
  for(int i=0;i<n;i++){
    if(i)cout<<' ';
    cout<<x[i]<<y[i];
  }
  cout<<endl;
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>c[i]>>a[i];
    c1[i]=c2[i]=c[i];
    a1[i]=a2[i]=a[i];
  }
  BubbleSort();
  output(c1,a1);
  if(isStable(c1,a1))cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
  SelectionSort();
  output(c2,a2);
  if(isStable(c2,a2))cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
  return 0;
}