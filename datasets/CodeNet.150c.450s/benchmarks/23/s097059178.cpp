#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>
#include <cstring>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
int f(const int);
 
int main()
{
    int N;
    int num=1,old[2]={1,1};
    cin>>N;
    for(int i=1;i<N;i++){
        num=old[0]+old[1];
        old[0]=old[1];
        old[1]=num;
    }
    cout<<num<<endl;
}