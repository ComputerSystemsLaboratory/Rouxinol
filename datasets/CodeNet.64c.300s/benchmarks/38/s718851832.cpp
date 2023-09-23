#include <iostream>
using namespace std;

int main(){
	int N;
	int A[11];
	int cnt1=0;
	cin>>N;
	while(1){
		
		if(cnt1==N){
			break;
		}
		cnt1++;
		for(int i=1;i<=10;i++){
			cin>>A[i];
		}
		int B=A[1];
		int Z[11];
		for(int i=1;i<=10;i++){
			Z[i]=0;
		}
		int C=0;
		int cnt2=0;
		int su=0;
		for(int i=2;i<=10;i++){
			if((B+1==A[i])/*||((su==1)&&(B<A[i]))*/){
				B=A[i];
				cnt2++;
				//cout<<"1"<<A[i]<<endl;
			}
			else if((C+1==A[i])/*||((su==1)&&(B<A[i]))*/){
				C=A[i];
				cnt2++;
				Z[i]=C;
				su=0;
//cout<<"2"<<A[i]<<endl;
			}
			else if(B<A[i]){
				B=A[i];
				//Z[i]=C;
				//su=0;
				cnt2++;
//cout<<"3"<<A[i]<<endl;
			}
			else if(C<A[i]){
				C=A[i];
				Z[i]=C;
				su=0;
				cnt2++;
//cout<<"4"<<A[i]<<endl;
			}
			//CにB＋1がはいっていたらsu=1にすること
			for(int q=1;q<=10;q++){
				if(B+1==Z[q]){
					su=1;
				}
			}
			
		}
		if(cnt2==9){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;	
}