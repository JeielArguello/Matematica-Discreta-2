#include <stdio.h>
#include <stdlib.h>
#include "APIG24.h"

Grafo ConstruirGrafo(){

}

void DestruirGrafo(Grafo G){

}

//funciones para extraer datos del grafo. u32 debe estar definida en el .h de arriba

u32 NumeroDeVertices(Grafo G){

}

u32 NumeroDeLados(Grafo G){
    u32 lados = G->num_lados;
    return lados;
}

u32 Delta(Grafo G){

}

//funciones de extraccion de informacion de vertices 


u32 Grado(u32 i,Grafo G){

}

color Color(u32 i,Grafo G){
    Vertice v = G->vertices[i];
    color c = v.color;
    return c;
}

u32 Vecino(u32 j,u32 i,Grafo G){

}

//funciones con colores


void AsignarColor(color x,u32 i,Grafo  G){

}

void ExtraerColores(Grafo G,color* Color){
    for (u32 i = 0; i < G->num_vertices; i++){
        Vertice v = G->vertices[i];
        Color[i] = v.color;
    }
}

void ImportarColores(color* Color,Grafo  G){
    for (u32 i = 0; i < G->num_vertices; i++){
        Vertice v = G->vertices[i];
        v.color = Color[i];
    }
}