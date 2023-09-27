#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//void get(vector<int> &prime1, int max){
//	bool prime2[max+1];
//	prime2[1] = prime2[0] = false;
//	for(int a = 2; a<=max; a++){
//		prime2[a] = true;
//	}
//	if(max>=4){
//		for(int i=2; i<=sqrt((double)max); i++){
//			if(prime2[i]) {
//			for(int j=i; i*j<=max ;j++) 
//			{
//				for(int k = j*i; k<=max; k*=i)
//				prime2[k] = false;
//			}
//				
//			}
//		}
//	}
//	for(int x = 0; x<=max; x++){
//		if(prime2[x])
//		prime1.push_back(x);
//	}
//}

bool IsPrime(int max){
	for(int i = 2; i<=sqrt((double)max); i++)
	{
		if(max%i == 0)	return false;
	}
	return true;
}


int main(){
	int n;
	cin>>n;
	int count = 0;
	int max = 0;	
	int array[n];
	vector<int> prime1;
	for(int i=0; i<n; i++){
		cin>>array[i];
//		if(array[i]>max)
//		max = array[i];
		if(IsPrime(array[i]))
		count++;
	}
	
//	get(prime1, max);		
	
//	for(int i = 0; i<n; i++){
//		for(int j = 0; j<prime1.size(); j++){
//			if(array[i] == prime1[j])
//			count++;
//		}
//	}
	cout<<count<<endl;
	return 0;
}