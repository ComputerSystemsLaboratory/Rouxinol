#include <iostream>
#include <vector> 
#include <math.h>
#include <stdio.h>
using namespace std;

double r(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	}

int main() {
	// your code goes here
int n;
int a[110]={0};
while(cin>>n){
	a[n]=a[n]+1;

}
int ma=-1;
vector<int> ve;
for(int j=0;j<101;j++){
	if(a[j]==ma){
		ve.push_back(j);
	}
	else if(a[j]>ma){
		ve.clear();
        ve.push_back(j);
        ma=a[j];
	}
		
		
	}
	
	int y=ve.size();
	for(int u=0;u<y;u++){
		cout<<ve[u]<<endl;
		
	}
	


	
	return 0;
}