#include <iostream>
#include <math.h>
#include <limits> 
using namespace std;


int main(){
	int n,min, max, offset;
//	int offset = numeric_limits<int>::min();
	cin>>n;
//	int array[n];
	cin>>min;
	cin>>max;
	offset = max - min;
	if(min>max) min = max;
	for(int i = 0; i<n-2; i++)
	{
		int temp, tempoff;
		cin>>temp;	
		if(min>temp) 
		{
			min = temp;
			
		} else
		{
			tempoff = temp-min;
			if(offset<tempoff) offset = tempoff;
		}
	}
		
//		if(i>=1)
//		{
//			for(int j = i-1; j>=0; j--) {
//				if(offset<array[i]-array[j])
//				offset = array[i]-array[j];
//			}
//		}
//	}
	
	cout<<offset<<endl;
	
	return 0;
}