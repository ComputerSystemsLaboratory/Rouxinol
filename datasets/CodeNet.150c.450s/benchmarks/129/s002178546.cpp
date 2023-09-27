#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Sheet;

int main()
{
    int r, c;
    cin >> r >> c;
    Sheet sheet(r, Row(c));
    
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            cin >> sheet[i][j];
        }
    }
    
    for(int i = 0; i < r; ++i){
        int sum = 0;
        for(int j = 0; j < c; ++j){
            sum += sheet[i][j];
        }
        sheet[i].push_back(sum);
    }
    Row sumRow(c+1, 0);
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c+1; ++j){
            sumRow[j] += sheet[i][j];
        }
    }
    sheet.push_back(sumRow);

    for(int i = 0; i < r+1; ++i){
        for(int j = 0; j < c+1; ++j){
            if(j) cout << " ";
            cout << sheet[i][j];
        }
        cout << endl;
    }
    return 0;
}