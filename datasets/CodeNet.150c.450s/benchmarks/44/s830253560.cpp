#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main(){
    for(;;){
	int a[4],b[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	cin>>b[0]>>b[1]>>b[2]>>b[3];
	if(cin.eof()) return 0;
	int hit=0,blow=0;
	for(int i=0;i<=3;i++){
		if(a[i]==b[i]) hit++;
		for(int j=0;j<=3;j++){
			if(j!=i && b[j]==a[i]) blow++;
		}
	}
	cout<<hit<<" "<<blow<<endl;	
    }
}