#include<iostream>
using namespace std;
char getGrade(int m,int f,int r){
   int sum = m+f;
   char grade;
   if(m==-1||f==-1){
       grade='F';
}else if(80<=sum){
    grade='A';
}else if(65<=sum&&sum<80){
    grade='B';
}else if(50<=sum&&sum<65){
    grade='C';
}else if(30<=sum&&sum<50){
    if(50<=r)grade='C';
    else grade='D';
}else if(sum<30){
    grade='F';
}
return grade;
}
int main(){
    int m,f,r;
    while(1){
        cin>>m>>f>>r;
        if(m==-1&&f==-1&&r==-1)break;
        cout<<getGrade(m,f,r)<<endl;
    }
    return 0;
}
