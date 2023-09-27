#include <iostream>
using namespace std;

const int kBuildingNum = 4;
const int kFloorNum = 3;
const int kRoomNum = 10;

void writeRoom(int (&floor)[kRoomNum])
{
    for (int i=0; i<kRoomNum; ++i)
    {
        cout << ' ' << floor[i];
    }
}

int main()
{    
    int infoNum=0;
    cin >> infoNum;
    
    int allInfo[kBuildingNum][kFloorNum][kRoomNum] = {0};
    int building=0, floor=0, room=0, resident=0;
    for (int i=0; i<infoNum; ++i)
    {
        cin >> building >> floor >> room >> resident;
        allInfo[building-1][floor-1][room-1] += resident;
    }
        
    for (int i=0; i<kBuildingNum; ++i)
    {
        for (int j=0; j<kFloorNum; ++j)
        {
            writeRoom(allInfo[i][j]);
//            if (!(j==kFloorNum-1 && i==kBuildingNum-1)) 
                cout << endl;
        }
        if (i!=kBuildingNum-1)  cout << "####################" << endl;
    }
    
    return 0;
}