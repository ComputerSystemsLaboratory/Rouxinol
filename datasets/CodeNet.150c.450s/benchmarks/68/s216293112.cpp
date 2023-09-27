#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	while(true){
		int n;
		cin >> n;
		if(n == 0){
			break;
		}
		int student[n];
		for(int i = 0; i < n; i++){
			cin >> student[i];
		}
		std::sort(student,student + n);
		int defference[n-1];
		for(int i = 0; i < n-1; i++){
			defference[i] = student[i+1] - student[i];
		}
		std::sort(defference, defference + (n-1));
		cout << defference[0] << endl;
  		
	}
return 0;
}
