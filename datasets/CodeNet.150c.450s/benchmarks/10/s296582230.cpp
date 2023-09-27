#include <iostream>

using namespace std;

void init(int list[3][10]){
    for(int x = 0;x<3;x++){
        for(int y = 0;y<10;y++){
            list[x][y]=0;
        }
    }
}

void updateDormStatus(int dorm[3][10],int row,int column,int value){
    dorm[row-1][column-1]+=value;
}

void printDorm(int dormA[3][10],int dormB[3][10],int dormC[3][10],int dormD[3][10]){
    for(int x = 0;x<3;x++){
        for(int y = 0;y<10;y++){
            cout<<' ';
            cout<<dormA[x][y];
        }
        cout<<endl;
    }
    for(int k = 0;k<20;k++){
        cout<<'#';
    }
    cout<<endl;
    
    //start B
    
    for(int x = 0;x<3;x++){
        for(int y = 0;y<10;y++){
            cout<<' ';
            cout<<dormB[x][y];
        }
        cout<<endl;
    }
    for(int k = 0;k<20;k++){
        cout<<'#';
    }
    cout<<endl;
    
    for(int x = 0;x<3;x++){
        for(int y = 0;y<10;y++){
            cout<<' ';
            cout<<dormC[x][y];
        }
        cout<<endl;
    }
    for(int k = 0;k<20;k++){
        cout<<'#';
    }
    cout<<endl;
    
    for(int x = 0;x<3;x++){
        for(int y = 0;y<10;y++){
            cout<<' ';
            cout<<dormD[x][y];
        }
        cout<<endl;
    }
    
}

int main(int argc, char **argv)
{
    int dormA[3][10];
    int dormB[3][10];
    int dormC[3][10];
    int dormD[3][10];
    init(dormA);
    init(dormB);
    init(dormC);
    init(dormD);
    
    int recordCount;
    cin>>recordCount;
    
    for(int count = 0; count< recordCount;count++){
        int dormNum,row,column,value;
        cin>>dormNum>>row>>column>>value;
        switch(dormNum){
            case 1:
            updateDormStatus(dormA,row,column,value);
            break;
            case 2:
            updateDormStatus(dormB,row,column,value);
            break;
            case 3:
            updateDormStatus(dormC,row,column,value);
            break;
            case 4:
            updateDormStatus(dormD,row,column,value);
            break;
        }
    }
    
    //printDorm(dormA,dormB,dormC,dormD);
    /*
    for(int x = 0;x<3;x++){
        for(int y = 0;y<10;y++){
            cout<<dormA[x][y];
            cout<<' ';
        }
        cout<<endl;
    }
     * */
    
    printDorm(dormA,dormB,dormC,dormD);
	return 0;
}