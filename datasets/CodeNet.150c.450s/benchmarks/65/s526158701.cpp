#include<iostream>
using namespace std;
 struct card{char suit,value;};

void bubble(struct card A[],int N){
for(int i=0;i<N;i++){
for(int j=N-1;j>=i;j--){
if(A[j].value<A[j-1].value){
card t=A[j];
A[j]=A[j-1];
A[j-1]=t;
}
}
}
}

void select(struct card A[],int N){
for(int i=0;i<N;i++){
int minj=i;
for(int j=i;j<N;j++){
if(A[j].value<A[minj].value)minj=j;
}
card t=A[i];
A[i]=A[minj];
A[minj]=t;
}
}

void print(struct card A[],int N){
for(int i=0;i<N;i++){
if(i>0)cout<<" ";
cout<<A[i].suit<<A[i].value;
}
cout<<endl;
}

bool stable(struct card c1[],struct card c2[],int N){
for(int i=0;i<N;i++){
if(c1[i].suit !=c2[i].suit)return false;
}
return true;
}

int main(){
card c1[100],c2[100];
int N;
char ch;

cin>>N;
for(int i=0;i<N;i++){
cin>>c1[i].suit>>c1[i].value;
}

for(int i=0;i<N;i++)c2[i]=c1[i];

bubble(c1,N);
select(c2,N);

print(c1,N);
cout<<"Stable"<<endl;
print(c2,N);
if(stable(c1,c2,N)){
cout<<"Stable"<<endl;
}else{cout<<"Not stable"<<endl;
}

return 0;
}