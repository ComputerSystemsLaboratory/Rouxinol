#include<iostream>
using namespace std;

int main()
{
	int n,PointA=0,PointB=0;
	short A,B,a=1;
	cin>>n;
	
	while(n!=0 || a==5){
		for(int i=0;i<n;i++){
			cin>>A>>B;
			if(A>B){
				PointA+=A+B;
			}
			else if(A<B){
				PointB+=A+B;
			}
			else if(A==B){
				PointA+=A;
				PointB+=B;
			}
		}
		cout<<PointA<<" "<<PointB<<endl;
		PointA=0,PointB=0;
	        a++;
		cin>>n;
	}
	
	return 0;
}