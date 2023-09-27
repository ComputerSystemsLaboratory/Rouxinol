#include<iostream>
#include<stack>
int main(){std::stack<int>s;for(int n;!(std::cin>>n).eof();)n?s.push(n):(std::cout<<s.top()<<'\n',s.pop());}