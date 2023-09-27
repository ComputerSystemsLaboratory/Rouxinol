#include <iostream>
using namespace std;

int seq[100000];
int n,k;

int req(int rem, int i)
{
	rem -= seq[i];
	rem += seq[i+k];
	return rem;
}
int main()
{
	while(cin >> n >> k){
		if(n==0&&k==0)
			break;
		for(int i=0;i<n;i++){
			cin >> seq[i];
		}
		int rem=0;
		for(int i=0;i<k;i++){
			rem+=seq[i];
		}
		int remm = rem;
		for(int i=0;i<n-k;i++){
			rem = req(rem,i);
			remm = max(remm,rem);
		}
		cout << remm << endl;
	}
	return 0;
}