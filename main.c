#include <stdio.h>
#include <stdlib.h>
#include "Prim.h"

int main(void)
{
    GraphType* g = (GraphType*)malloc(sizeof(GraphType));
    graph_init(g);

    GenerateGraph(g); //�׷����� �����ϴ� �Լ�

    FindPrimMST(g); //Prim�� �̿��� MST�� ã��

    free(g);
    return 0;
}
