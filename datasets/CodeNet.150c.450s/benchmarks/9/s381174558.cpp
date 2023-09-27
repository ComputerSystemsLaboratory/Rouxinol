#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(void){
    // Here your code !
  int m,h;

  
 while(true){ 
  string W="";
cin>>W;
cin>>m;
if(W=="-") break;

for(int i=0; i<m;i++){
    cin>>h;

    string left=W.substr(0,h);

    string right=W.substr(h,W.length() - h + 1);
    
    W=right+left;
}
cout<<W<<endl;
}

}