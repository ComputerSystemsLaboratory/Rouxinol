#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Sheet;

Sheet InputSheet(int r, int c)
{
    Sheet sheet(r, Row(c));
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            cin >> sheet[i][j];
        }
    }
    return sheet;
}
Sheet AddSum(Sheet sheet)
{
    int r = sheet.size();
    for(int i = 0; i < r; ++i){
        int c = sheet[i].size();
        int sum = 0;
        for(int j = 0; j < c; ++j){
            sum += sheet[i][j];
        }
        sheet[i].push_back(sum);
    }
    int c = sheet[0].size();
    Row sumRow(c, 0);
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            sumRow[j] += sheet[i][j];
        }
    }
    sheet.push_back(sumRow); 
    return sheet;
}
void ShowSheet(Sheet sheet)
{
    int r = sheet.size();
    for(int i = 0; i < r; ++i){
        int c = sheet[i].size();
        for(int j = 0; j < c; ++j){
            if(j) cout << " ";
            cout << sheet[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int r, c;
    cin >> r >> c;
    ShowSheet(AddSum(InputSheet(r, c)));
    return 0;
}