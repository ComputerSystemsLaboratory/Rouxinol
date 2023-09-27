#include<iostream>

using namespace std;

int main(){

int aaa[200];
int ii=0;

while(cin>>aaa[ii]){
ii++;
}

for(int i=0;i<ii;i++){
if(aaa[i]==0){
for(int j=i-1;;j--){
if(aaa[j]!=0){
cout<<aaa[j]<<endl;
aaa[j]=0;
break;
}
}
}
}


}