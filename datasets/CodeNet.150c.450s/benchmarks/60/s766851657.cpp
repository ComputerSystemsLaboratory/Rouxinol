#include <stdio.h>

#define VerticesNum 100
typedef unsigned int uint;



int main(void){
    uint Graph[VerticesNum][VerticesNum] = {};
    
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
            Graph[uVertexIdx - 1][AdjacentVertex - 1] = 1; 
        }
    }
    
    for(uint i = 0; i < uVertices; i++)
    {
        for(uint j = 0; j < uVertices; j++)
        {
            printf("%u", Graph[i][j]);
            (j < (uVertices - 1))
                ? printf(" ")
                : printf("\n");
        }
    }
    
    return 0;
}
