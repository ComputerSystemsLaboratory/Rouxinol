#include <iostream>

using namespace std;

int search(int a[],int n,int key){
  int i = 0;
  a[n]=key;
  while(a[i]!=key) i++;
  return i != n;
}


int main(){


int n,m;
int a[10005]={};
int b[505]={};

cin >> n;

for(int i=1;i<=n;i++){
  cin >> a[i];
 }
 int key;
cin >> m;
int c=0;
for(int i=1;i<=m;i++){
  cin >> key;
  if(search(a,n,key)) c++;
 }





    cout << c << endl;

}