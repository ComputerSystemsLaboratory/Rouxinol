#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int count_digit(int num){
  if(num==0)return 1;
  int res=0;
  while(num>0){
    num/=10;
    res++;
  }
  return res;
}

int a[10],n,c,l,maxn,minn,ans;
int ch[21];

void deb() {

  for(int i=0;i<l;i++)
    cout << a[i] <<" ";
  cout << endl;
      
}

void suji() {
  int t = 1;
  maxn = 0;
  minn = 0;
  for(int i=0;i<l-1;i++) t *=10;
  for(int i=0;i<l;i++){
    maxn += a[i] * t;
    minn += a[l-1-i] * t;
    t /= 10;
  }

  //printf("max(%d) - min(%d) = %d\n",maxn,minn,maxn-minn);
  
}
    

void buble() {
  int t;
  for(int i=0;i<l;i++) {
    for(int j=i;j<l;j++) {
      if(a[i] < a[j] ) {
	t = a[i];
	a[i] = a[j];
	a[j] = t;
      }
      
    }
  }
  
}

void  bunkai() {
  //cout << "bunkai " << n << endl;
  int t = n;
  int keta=1;
  for(int i=0;i<l-1;i++) keta *=10;
  for(int i=0;i<l;i++) {
    a[i] = t / keta;
    t %= keta;
    keta /= 10;
  }
   
}


void check(int x) {

  for(int i=0;i<x;i++) {
    if(n == ch[i]) {
      ans = i;
      break;
      //printf("n(%d) = ch[%d](%d)\n",n,i,ch[i]);

    }
  }

  
}




int main() {

  while(1) {

    cin >>n >> l;
    if(n==0&&l==0)break;

    int count = -1;
    int t = n;


    for(int i=0;i<21;i++) ch[i] = -1;


    c=count_digit(t);

    for(int i=0;i<l-c;i++)  n *= 10;
    ans = -1;

    while(1) {
      count++;
      check(count);
      ch[count] = n;
      if(ans != -1) break;

      bunkai();
      buble();
      suji();
      n = maxn - minn;

      //cout<<n<<' '<<maxn<<' '<<minn<<endl;
    }
    
    cout << ans <<" " << n << " " <<count - ans<< endl;
    
  } 
  
  
  
  return 0;
 
}
      
    
 