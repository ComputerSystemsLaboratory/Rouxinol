#include<iostream>
#include<vector>

using namespace std;

int ans[100];
int cont = 0;

int main()
{
	for(;;){
		int n;		//[ÌÎÛÆÈé£ZÒÌ
		int m;		//Dµ½£ZÒÌÔ
		double p;		//T¦
		int temp;
		
		int total = 0;	//S[Ìvàz
		
		cin >> n;
		cin >> m;
		cin >> p;
		
		if(n == 0 && m == 0 && p == 0){
			break;
		}
		
		vector<int> ken(n,0);
		
		for(int i = 0; i < n; i++){
			cin >> ken[i];
		}
		
		/*  vàz±o  */
		for(int i = 0; i < n; i++){
			total += ken[i]*100;
		}
		
		total = total*((100-p)/100);
		
		if(ken[m-1] == 0){
			total = 0;
		}
		else{
			total = total / ken[m-1];
		}
		
	//	cout << total << endl;
		ans[cont] = total;
		
		cont++;
	}
	
	for(int i = 0; i < cont; i++){
		cout << ans[i] << endl;
	}
	
}
	