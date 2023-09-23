#include <cstdio>
int main(){
 int top3[3];
 int i,tmp,data;
 for(i=0;i<3;i++) top3[i]=0;
 for(i=0;i<10;i++){
  scanf("%d",&data);
  if (top3[2]>data) {} 
  else {
   top3[2]=data;
   if (top3[1]>data) {} 
   else {
    top3[2]=top3[1];
    if (top3[0]>data) top3[1]=data;
    else {
     top3[1]=top3[0];
     top3[0]=data;
    };
   };
  };
 };
 for(i=0;i<3;i++)
    printf("%d\n",top3[i]);
 return 0;
};
 