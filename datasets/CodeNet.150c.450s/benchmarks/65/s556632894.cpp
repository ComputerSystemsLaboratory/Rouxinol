#include<iostream>
#include<stdio.h>
using namespace std;

struct Ca{char suit,value;};

void BubbleSort(struct Ca C[],int N){
	
   for(int i = 0 ;i< N;i++){
     for(int j = N-1;j>=i;j--){
		 if( C[j].value< C[j-1].value){
			Ca tmp=C[j];C[j]=C[j-1];C[j-1]=tmp;}
}
   }
}
        

void SelectionSort(struct Ca C[],int N)
{  
 for(int i = 0 ;i< N;i++){
    int minj = i;
    for(int j = i ;j< N;j++){
      if (C[j].value< C[minj].value)
		  minj = j;}
Ca tmp=C[i];C[i]=C[minj];C[minj]=tmp;}
}
    
bool isStable(struct Ca c1[],struct Ca c2[],int N){
for(int i=0;i<N;i++){
if(c1[i].suit!=c2[i].suit)return false;
}return true;
}
int main(){
Ca c1[100],c2[100];
int N;
char ch;

cin>>N;
for(int i=0;i<N;i++){
cin>>c1[i].suit >>c1[i].value;
}
for(int i=0;i<N;i++)c2[i]=c1[i];

BubbleSort(c1,N);

SelectionSort(c2,N);

for(int i=0;i<N;i++){
if(i>0)cout<<" ";
cout<<c1[i].suit<<c1[i].value;
}
cout<<endl;
cout<<"Stable"<<endl;

for(int i=0;i<N;i++){
if(i>0)cout<<" ";
cout<<c2[i].suit<<c2[i].value;
}
cout<<endl;
if(isStable(c1,c2,N)){
cout<<"Stable"<<endl;
}else{
cout<<"Not stable"<<endl;
}

return 0;
}