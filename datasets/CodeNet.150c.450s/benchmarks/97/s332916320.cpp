#include<bits/stdc++.h>
using namespace std;

int main(){
  
  while(1){
    int n=0;
    pair <int,int> a[201] ={};
    cin >>n;
    if(n == 0)break;
    int xmax=0,xmin=0,ymax=0,ymin=0;
    a[0]=make_pair(0,0);
    for(int i=1;i<n;i++){
      int num=0,hougaku=0;
      cin >> num >> hougaku;
      if(hougaku ==0){a[i].first =a[num].first - 1;
	a[i].second =a[num].second;}
      if(hougaku ==1){a[i].second=a[num].second - 1;
	a[i].first=a[num].first;}
      if(hougaku ==2){a[i].first =a[num].first + 1;
	a[i].second =a[num].second;}
      if(hougaku ==3){a[i].second=a[num].second + 1;
	a[i].first=a[num].first;}
      xmax=max(xmax,a[i].first);
      xmin=min(xmin,a[i].first);
      ymax=max(ymax,a[i].second);
      ymin=min(ymin,a[i].second);
    }

    cout << xmax - xmin + 1 <<" " << ymax - ymin +1 << endl;
   
  }




}

