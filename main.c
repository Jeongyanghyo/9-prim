#include <stdio.h>
#include <stdlib.h>
#include "Prim.h"

int main(void)
{
    GraphType* g = (GraphType*)malloc(sizeof(GraphType));
    graph_init(g);

    GenerateGraph(g); //그래프를 생성하는 함수

    FindPrimMST(g); //Prim을 이용해 MST를 찾음

    free(g);
    return 0;
}
