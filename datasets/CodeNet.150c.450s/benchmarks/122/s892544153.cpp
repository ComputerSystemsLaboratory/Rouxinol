#include<bits/stdc++.h>

using namespace std;

int main() {
   priority_queue<int>num;
   string command;

   int n;

   while(1){
    cin>>command;
    if(command.compare("insert") == 0){
        cin>>n;
        num.push(n);
    }
    if(command.compare("extract") == 0){
        cout<<num.top()<<endl;
        num.pop();
    }
    if(command.compare("end") == 0){
        break;
    }
   }
   return 0;
}

