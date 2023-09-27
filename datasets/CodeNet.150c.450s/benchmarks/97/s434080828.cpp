#include<iostream>
#include<cstdio>

using namespace std;
typedef struct{
  int up;
  int down;
  int right;
  int left;
}ze;
ze z[200];

void print(int i){
  cout <<z[i].up<<" "<<z[i].down<<" "<<z[i].left<<" "<<z[i].right<<" "<<endl;

}
int main(){
  int n=0,n1,d;
  int rm;
  int lm;
  int um;
  int dm;
  while(true){
    rm=1;
    lm=0;
    um=1;
    dm=0;
    for(int i =0;i<n;i++){
      z[i].up=1;
      z[i].down=0;
      z[i].right=1;
      z[i].left=0;
    }
    cin>>n;
    if(n==0)break;
    for(int i = 1;i<n;i++){
      cin>>n1>>d;
      z[i]=z[n1];
      if(d==0){
	z[i].left++;
	//	print(i);
	if(lm<z[i].left+1-z[i].right)lm=1+z[i].left-z[i].right;
      }
      else if(d==1){
	z[i].down++;
	//	print(i);
 	if(dm<z[i].down+1-z[i].up)dm=1+z[i].down-z[i].up;
     }
      else if(d==2){
	z[i].right++;
	//	print(i);
       	if(rm<z[i].right-z[i].left)rm=z[i].right-z[i].left;
      }
      else {
	z[i].up++;
	//	print(i);
	if(um<z[i].up-z[i].down)um=z[i].up-z[i].down;
     }
    }
    cout<<rm+lm<<" "<<um+dm<<endl;
  }
  return 0;
}