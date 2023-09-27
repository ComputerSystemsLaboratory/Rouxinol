#include <iostream>
using namespace std;
int main(){


int h,m,s;
int S=3660;
cin>>S>>h>>m>>s;

cout <<S/3600 <<":"<<(S%3600)/60<<":" <<(S%3600)%60<<endl;

return 0;
}
