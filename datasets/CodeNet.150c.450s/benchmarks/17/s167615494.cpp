#include <iostream>

using namespace std;

int SolvedPuzzle[100];

int main()
{
    cin >> SolvedPuzzle[0] >> SolvedPuzzle[1] >> SolvedPuzzle[2] >> SolvedPuzzle[3] >> SolvedPuzzle[4];

    for(int x=0; x<4; x++)
    {
        for(int y=0; y<4; y++)
        {
            if(SolvedPuzzle[y]<SolvedPuzzle[y+1])
            {
                int temp;
                temp = SolvedPuzzle[y+1];
                SolvedPuzzle[y+1] = SolvedPuzzle[y];
                SolvedPuzzle[y] = temp;

            }
        }
    }
    cout << SolvedPuzzle[0] << " " << SolvedPuzzle[1] << " " << SolvedPuzzle[2] << " " << SolvedPuzzle[3] << " " << SolvedPuzzle[4] << endl;

}