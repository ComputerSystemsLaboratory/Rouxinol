#include <iostream>
#include <string>

using namespace std;

 int main(void) {

	 int N, M;
	 string U[256];
	 string T;
	 bool f = true;
	 bool find;

	 cin >> N;

	 for (int i = 0; i < N; i++){
		 cin >> U[i];
	 }

	 cin >> M;

	 for (int i = 0; i < M; i++){
		 cin >> T;
		 find = false;
		 for (int j = 0; j < N; j++){
			 if (U[j] == T) find = true;
		 }
		 if (find){
			 if (f){
				 f = false;
				 cout << "Opened by ";
			 }
			 else{
				 f = true;
				 cout << "Closed by ";
			 }
		 }
		 else cout << "Unknown ";

		 cout << T << endl;
	 }

	 return 0;
	
}