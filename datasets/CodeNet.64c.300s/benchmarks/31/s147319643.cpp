#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int s[30],n;

int main(){
	for(int i=0;i<28;i++){cin>>n;s[n-1]=1;}
	for(int i=0;i<30;i++)if(s[i]==0)cout<<i+1<<endl;
}