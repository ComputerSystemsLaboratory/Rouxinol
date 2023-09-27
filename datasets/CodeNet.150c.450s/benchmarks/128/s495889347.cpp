#include<iostream>
#include<algorithm>
int main(){char c[21];std::cin>>c;std::string d(c);std::reverse(d.begin(),d.end());std::cout<<d.c_str()<<'\n';}