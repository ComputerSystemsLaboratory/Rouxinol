#include<iostream>
using namespace std;
int main(){
int x,No1,No2,No3;
No1=0;
No2=0;
No3=0;
for(int i=0;i<10;i++){
cin>>x;
if(x>No1){
No3=No2;
No2=No1;
No1=x;
}else if(x>No2){
No3=No2;
No2=x;
}else if(x>No3){
No3=x;
}
}
cout<<No1<<endl<<No2<<endl<<No3<<endl;
return 0;
}