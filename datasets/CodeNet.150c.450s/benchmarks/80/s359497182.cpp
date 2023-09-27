
#include <iostream>
#include <string>
#include <vector>
#include <utility> 
#include <tuple>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;


int main() {
int a,b,c,d;
cin>>a>>b>>c>>d;
int s=a+b+c+d;
cin>>a>>b>>c>>d;
int t=a+b+c+d;

if(s>t) cout<<s<<endl;
else cout<<t<<endl;

	return 0;
}