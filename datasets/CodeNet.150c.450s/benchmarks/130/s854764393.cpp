#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n1 = 0, n2 = 0;
    cin >> n1 >> n2;

    vector< vector<int> > mat(n1);
    vector<int> colVec(n2);

    for(int i = 0; i < n1; i++)
    {
	mat[i].reserve(n2);
	for(int j = 0; j < n2; j++){ cin >> mat[i][j]; }
    }
    
    for(int i = 0; i < n2; i++){ cin >> colVec[i]; }

    //Multiplication
    for(int i = 0; i < n1; i++)
    {
        int sum = 0;
        for(int j = 0; j < n2; j++)
        {
            sum += mat[i][j] * colVec[j];
        }
        cout << sum << endl;
    }

    return 0;
}