#include<stdio.h>

int main(void){
    
    int MountHigh[10] = {0};
    int TopHillsThree[3] = {0};
    int ActionNum = 0;
    int MountNum = 0;
    
    //??\?????¨
    fscanf(stdin,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",
           &MountHigh[0],
           &MountHigh[1],
           &MountHigh[2],
           &MountHigh[3],
           &MountHigh[4],
           &MountHigh[5],
           &MountHigh[6],
           &MountHigh[7],
           &MountHigh[8],
           &MountHigh[9]);
    
    //???????????¨???
    for(ActionNum = 1; ActionNum < 10; ActionNum++){
        for(MountNum = 0; MountNum < (10 - ActionNum); MountNum++){
            if(MountHigh[MountNum] < MountHigh[MountNum + 1]){
                const int Temp = MountHigh[MountNum + 1];
                MountHigh[MountNum + 1] = MountHigh[MountNum];
                MountHigh[MountNum] = Temp;
            }
        }
    }
    
    //??£??\??¨???
    TopHillsThree[0] = MountHigh[0];
    TopHillsThree[1] = MountHigh[1];
    TopHillsThree[2] = MountHigh[2];
    
    printf("%d\n%d\n%d\n",
           TopHillsThree[0],
           TopHillsThree[1],
           TopHillsThree[2]);
    
    return(0);
}