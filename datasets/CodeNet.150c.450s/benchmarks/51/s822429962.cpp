#include<bits/stdc++.h>
using namespace std;

int main(){
list<int>a;
for(int b=0;b<30;b++){
	a.push_back(b+1);
}
int d;
for(int c=0;c<28;c++){
	scanf("%d",&d);
	a.remove(d);
}
auto s=a.begin();
printf("%d\n",*s);
s++;
printf("%d\n",*s);
}