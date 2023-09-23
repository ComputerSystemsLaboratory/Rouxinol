#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i, j, s;
    int A[100][100];
    int b[100];

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
            cin >> A[i][j];
		}
	}

	for(j = 0; j < m; j++) cin >> b[j];

	for(i = 0; i < n; i++){
        s = 0;
		for(j = 0; j < m; j++){
            s = s + A[i][j] * b[j];
		}
        cout << s << endl;
	}

    return 0;
}