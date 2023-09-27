#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
char letter[30], dump[30];
int b;
priority_queue<int>PQ;
do{
fgets(letter, 25, stdin);
if(letter[0]=='i'){
sscanf(letter, "%*s %d", &b, sizeof(b));
PQ.push(b);
}else{
if(letter[0]=='e' && letter[1]=='n' && letter[2]=='d'){
break;
}else{
cout << PQ.top() << endl;
PQ.pop();
}
}
}while(1);
return 0;
}
