#include<iostream>
#include<cmath>
using namespace std;
int x,y,z;
int e;
int solve(){
	int minnum = 1000000;
	for(int z = 0; pow(z, 3) <= e; z++)
	{
		y = (int)sqrt(e - pow(z, 3));
		minnum = min(minnum,(int)(e - pow(z, 3)-pow(y, 2))+y+z); 
	}
	return minnum;
};
int main(){
	int A[100000];
    int k = 0;
	while( cin>>e && e>0 )
	{
		A[k]=solve();
        k++;
	}
	for(int l = 0;l < k; l++)
    {
        cout<<A[l]<<endl;
    }
	return 0;
}