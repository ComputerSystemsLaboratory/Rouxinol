#include <iostream>
using namespace std;

int main(){
int num,temp;

while(1){
   cin>>num;
   if(num==0){
   break;
   }
   int min=10000000,max=0,sum=0;
   for(int i=0;i<num;i++){
   cin>>temp;
   if(min>temp)min=temp;
   if(max<temp)max=temp;
   sum+=temp;
   }
   sum=sum-max-min;
   cout<<sum/(num-2)<<endl;
}

return 0;
}