#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(void){
    // Here your code !
  int c=0;
  string W,T;
  
cin>>W;
for(int i=0; i<W.size();i++){
    W[i]=tolower(W[i]);
}

while(true){

cin>>T;

if(T=="END_OF_TEXT") break;
for(int i=0; i<T.size();i++){
    T[i]=tolower(T[i]);
}
if(T==W) c++;
}

cout<<c<<endl;

}