#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, n, count, sum;

	while(cin >> n) {
		if(n>50)
			continue;
		count=0;
		for(a=0; a<10; a++) {
			for(b=0; b<10; b++) {
				for(c=0; c<10; c++) {
					for(d=0; d<10; d++) {
						sum=0;
						sum+=a+b+c+d;
						if(sum==n)
							count++;
						if(sum>35)
							break;

					}
				}
			}
		}
		cout << count << endl;
	}

	return 0;

}