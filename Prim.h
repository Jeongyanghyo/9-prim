#pragma once
#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000L

typedef struct GraphType {
    int n; // 정점의 개수
    int weight[MAX_VERTICES][MAX_VERTICES];
} GraphType;



int selected[MAX_VERTICES];
int distance[MAX_VERTICES];

extern void graph_init(GraphType* g);
extern void GenerateGraph(GraphType* g);
extern void FindprimMST(GraphType* g);
extern int get_min_vertex(int n);


