// Tiempo de trabajo: 50 min
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void generaArr(float A[]);
void imprimeArr(float A[]);
void invierteArr(float A[]);
void imprimeArrInv(float A[]);

int main() {
  float A[N];
  generaArr(A);
  imprimeArr(A);
  invierteArr(A);
  imprimeArrInv(A);
}

void generaArr(float A[]) {
  float *ptr = &A[0];
  srand(time(NULL));
  for (int i = 0; i < N; i++) {
    
    *(ptr + i) = 1 + (rand() / (float)RAND_MAX) * 9;
  }
}

void imprimeArr(float A[]) {
  float *ptr = &A[0];
  printf ("Arreglo generado:\n");
  for (int i = 0; i < N; i++) {
    printf("%.3f ", *(ptr + i));
  }
  puts("\n");
}

void invierteArr(float A[]) {
  float *ptr = &A[0];
  int pos = 0;
  float aux = A[0];
  
  for (int i = 0; i < 10; i++) {
    if (*(ptr + i) < *(ptr + pos)) {
      pos = i;
    }
  }
  A[0] = *(ptr + pos);
  *(ptr + pos) = aux;

  aux = A[9];
  pos = 0;
  for (int i = 0; i < 10; i++) {
    if (*(ptr + i) > *(ptr + pos)) {
      pos = i;
    }
  }
  A[9] = *(ptr + pos);
  *(ptr + pos) = aux;
}

void imprimeArrInv(float A[]) {
  float *ptr = &A[9];
  printf ("Arreglo invertido:\n");
  for(int i = 0; i < 10; i++) {
    printf ("%.3f ", *(ptr - i));
  }
}
