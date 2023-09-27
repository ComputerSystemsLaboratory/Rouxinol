#include<bits/stdc++.h>
using namespace std;

#define maxPN 1000000
#define PNs  1000100
int countPN = 0, countPNs = 0;
long long PrimeNum[maxPN], temp;
bool PN[PNs];

bool IsPrimeNumber(long long x);

void PrimeN(){
	int i, j;
	PrimeNum[0] = 2;
	PN[2] = true;PrimeNum[countPN++] = 2;
	PN[3] = true;PrimeNum[countPN++] = 3;
//	PN[5] = true;PrimeNum[countPN++] = 5;
	
	for(i = 6; i  < PNs;i+=6){
		if(IsPrimeNumber(i-1)){
			PrimeNum[countPN++] = i-1;
			PN[i-1] = true;//cout<<i-1<<endl;
		}
		if(IsPrimeNumber(i+1)){
			PrimeNum[countPN++] = i+1;
			PN[i+1] = true;//cout<<i+1<<endl;
		}
		countPNs = i+1;//cout<<i-1<<" "<<PN[i-1]<<endl;
	}
}

bool IsPrimeNumber(long long x){
	//if(x == 2 || x == 3) return true;
	//if(x <= 4 || x%2 == 0 || x%3 == 0)   return false;
	//if(x < countPNs) return PN[x];
	for(long long i = 0; PrimeNum[i] * PrimeNum[i] <= x; i++)
		if(x%PrimeNum[i] == 0)return false;
	return true;
}


int main(){
	clock_t start, end;
	long long n = true, counta;
	start = clock();
	PrimeN();
//	cout<<PrimeNum[countPN-1]<<" "<<countPNs<<endl;
//	cout<<clock()-start<<"ms"<<endl;
	
	while(cin>>n){
		counta = 1;
		
		
		//cout<<(IsPrimeNumber(n)?"yes":"no")<<endl;
		start = clock();
		//cout<<IsPrimeNumber(n)<<endl;
		for(int i = 1; i <= n; i+=2){
			if(PN[i])counta++;
		//	cout<<i<<" "<<PN[i]<<endl;
		}
		if(n == 1) counta = 0;
		cout<<counta<<endl;
	//	cout<<clock()-start<<"ms"<<endl;
	}
	return 0;
}
