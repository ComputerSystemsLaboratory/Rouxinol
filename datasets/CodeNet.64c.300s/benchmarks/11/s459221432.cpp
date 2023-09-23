#include <iostream>
using namespace std;

int main(){
				int S;
				int h=0,m=0,s=0;
				cin >> S ;
				int i = (h+1) * 60 * 60;
				while(i <= S){
								h += 1;
								i = (h+1) * 60 * 60;
				}
				S = S - h*60*60;
				
				i = (m+1) * 60;
				while(i <= S){
								m += 1;
								i = (m+1) * 60;
				}
				S = S - m*60;

				i = s+1;
				while(i <= S){
								s += 1;
								i = s+1;
				}
				S = S - s;

				cout << h << ":" << m << ":" << s << endl;
}

