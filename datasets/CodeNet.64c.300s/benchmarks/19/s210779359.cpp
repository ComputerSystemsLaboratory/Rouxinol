#include<iostream>
using namespace std;
int main(){
	int n;
	for(;;){
		int row[5000];
		cin >>n;
		if(n == 0){break;}
		for(int i=0; i<n; i++){
			cin >>row[i];
		}
		int max = -9999999;
		for(int i=0; i<n; i++){
			int sum = row[i];
			if(max<sum){max = sum;}
			for(int l=i+1; l<n; l++){
				sum+=row[l];
				if(max<sum){max = sum;}				
			}
		}
		cout <<max<<endl;
	}
}