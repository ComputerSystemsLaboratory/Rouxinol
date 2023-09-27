#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
using namespace std;

int main(){
int m,p;

while(cin>>m>>p && m!=0){
int a[55]={0};
int no=0,is=p;
while(1){
if(is>0){
is--;
a[no]++;
}
else if(a[no]>0){
is=is+a[no];
a[no]=0;
}
//cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<is<<" "<<no<<endl;
if(a[no]==p) break;

no=no+1;
no=no%m;

//cout<<no<<" "<<is<<endl;

}
cout<<no<<endl;
}

return 0;
}