#include<iostream>
using namespace std;

int main(){

const int MAX_NO=100000;
int m[MAX_NO],f[MAX_NO],r[MAX_NO];
char hyouka[MAX_NO];
int a=0;
int b=0;
int c=0;

for(int i=1;i<MAX_NO;i++){

cin>>m[i]>>f[i]>>r[i];

a++;

for(int j=1;j<200000000;j++){
b++;
b--;
b++;
if(b%2==0){
c++;
}
}

if(m[i]==-1 && f[i]==-1 && r[i]==-1){
goto aa;
}

if(m[i]==-1 || f[i]==-1){
hyouka[i]='F';
}

else if((m[i]+f[i])>=80){
hyouka[i]='A';
}
else if((m[i]+f[i])>=65){
hyouka[i]='B';
}

else if((m[i]+f[i])>=50){
hyouka[i]='C';
}

else if((m[i]+f[i])>=30 && r[i]<50){
hyouka[i]='D';
}
else if((m[i]+f[i])>=30 && r[i]>=50){
hyouka[i]='C';
}

else if((m[i]+f[i])<30){
hyouka[i]='F';
}

}

aa:;

for(int i=1;i<a;i++){

cout<<hyouka[i]<<endl;

}

return 0;
}