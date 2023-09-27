#include <stdio.h>
     
int triJudgefunc(int x, int y, int z);
     
int main(void)
{
    int row;
    scanf("%d", &row);
    for (int i = 0; i < row; ++i) {
        int firstn, secondn ,thirdn; 
        scanf("%d %d %d", &firstn, &secondn, &thirdn);
        if (triJudgefunc(firstn, secondn, thirdn) == 0) {
        printf("YES\n");
        } else {
        printf("NO\n");
        }
    }
    return 0;
}
     
     
     
int triJudgefunc(int x, int y, int z)
{
    int maxlength, notmax1, notmax2;
    if (x > y) {    //x > y
        if (x > z) {
            maxlength = x; notmax1 = y; notmax2 = z;    //x???max
        } else {
            notmax1 = x; notmax2 = y; maxlength = z;    //z???max
        }
    } else {    //y > x
        if (y > z) {
            notmax1 = x; maxlength = y; notmax2 = z;    //y???max
        } else {
            notmax1 = x; notmax2 = y; maxlength = z;    //z???max
        }
    }
    int result = maxlength * maxlength - notmax1 * notmax1 - notmax2 * notmax2;
    return result;
}
 