#include <iostream>
using namespace std;
int main(void){
	int a,b=0;
	while(cin>>a){
		for (int A=0;A<10;A++){
			for (int B=0;B<10;B++){
				for (int C=0;C<10;C++){
					for (int D=0;D<10;D++){
						if (A+B+C+D==a) b++;
					}
				}
			}
		}
		cout<<b<<endl;
		b=0;
	}
	return 0;
}