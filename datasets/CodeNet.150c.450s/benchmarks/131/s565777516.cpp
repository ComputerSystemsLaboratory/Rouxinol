#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b,a!=0||b!=0){
		map<int, int> S;
		string t = "";

		S[a] = 1;
		for(int q = 2;;q++){
			int A[10];
			for(int i = 0;i < b;i++){
				A[i] = a%10;
				char c = a%10 + '0';
				t += (c);
				a /= 10;
			}
			string s1 = "", s2 = "";
			sort(A,A+b);
			for(int i = 0;i < b;i++){
				char c = A[i] + '0';
				s1 += (c);
			}
			reverse(A,A+b);
			for(int i = 0;i < b;i++){
				char c = A[i] + '0';
				s2 += (c);
			}
			int x = atoi(s2.c_str()) - atoi(s1.c_str());

			//cout<<x<<endl;
			if(S[x]){
				cout<<S[x]-1<<" "<<x<<" "<<q - S[x]<<endl;
				break;
			}
			S[x] = q;
			a = x;

		}

	}
}