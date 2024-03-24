#ifndef ESTRUCTURAGRAFO24_H
#define ESTRUCTURAGRAFO24_H


typedef unsigned int u32;

typedef u32 color;

typedef struct {
    u32 num_vertices;
    u32 num_lados;
    u32 delta;
    Vertice** vertices;
} GrafoSt;

typedef struct {
    Vertice** vertices_vecinos;
    u32 grado;
    u32 color;
} Vertice;

typedef struct {
    TuplaVer* lista;
    u32 cantidad_de_lados;
} Lados;

typedef struct {
    int vertice1;
    int vertice2;
} TuplaVer;

#endif
