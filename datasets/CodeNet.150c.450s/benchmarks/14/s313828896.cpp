#include<iostream>
using namespace std;

int main()
{
    int n, i, x;
    cin >> n;

	for(i = 1; i <= n; i++){
		if(i % 3 == 0){
            cout << " " << i;
		}else{
            x = i;
			do{
				if(x % 10 == 3){
                    cout << " " << i;
					break;
				}
                x = x / 10;
			}while(x);
		}
	}
    cout << endl;

    return 0;
}