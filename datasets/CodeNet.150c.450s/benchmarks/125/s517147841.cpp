#include <stdio.h>

#define VerticesNum 100
typedef unsigned int uint;

struct output
{
    uint uDiscoverTime;
    uint uFinTime;
}Output;

struct output gstOutput[VerticesNum];
uint uTotalTime = 1;

void DepthFirstSearch(uint pGraph[][VerticesNum], uint uSize, uint uRoot)
{
    if(gstOutput[uRoot].uDiscoverTime == 0)
    {
        gstOutput[uRoot].uDiscoverTime = uTotalTime++;
    }
    else
    {
        return;
    }
    
    for(uint i = 0; i < uSize; i++)
    {
        if((pGraph[uRoot][i] == 1) && (gstOutput[i].uDiscoverTime == 0 ))
        {
            DepthFirstSearch(pGraph, uSize, i);
        }
    }
    gstOutput[uRoot].uFinTime = uTotalTime++;
    
    return;
}

int main(void){
    uint arGraph[VerticesNum][VerticesNum] = {};
    
    uint uVertices;
    scanf("%u", &uVertices);
    
    for(uint i = 0; i < uVertices; i++)
    {
        uint uVertexIdx;
        uint OutDegree;
        scanf("%u", &uVertexIdx);
        scanf("%u", &OutDegree);
        for(uint j = 0; j < OutDegree; j++)
        {
            uint AdjacentVertex;
            scanf("%u", &AdjacentVertex);
            arGraph[uVertexIdx - 1][AdjacentVertex - 1] = 1; 
        }
    }
    /*
    for(uint i = 0; i < uVertices; i++)
    {
        for(uint j = 0; j < uVertices; j++)
        {
            printf("%u", stGraph[i][j]);
            (j < (uVertices - 1))
                ? printf(" ")
                : printf("\n");
        }
    }
    */
    for(uint uRoot = 0; uRoot < uVertices; uRoot++)
    {
        DepthFirstSearch(arGraph, uVertices, uRoot);
    }
    
    for(uint i = 0; i < uVertices; i++)
    {
        printf("%d %d %d\n", i + 1, gstOutput[i].uDiscoverTime, gstOutput[i].uFinTime);
    }
    
    return 0;
}
