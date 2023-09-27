#include<iostream>
#include<stack>
using namespace std;

int main(){
int answer[10];
int a,b;
b=0;
stack<int> train;
while(cin>>a){
if(a==0){
cout<<train.top()<<endl;
train.pop();}
if(a!=0){
	train.push(a);}}}