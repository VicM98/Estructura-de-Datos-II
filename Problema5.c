#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Captura() {
  int n;
  printf("Ingresa el tamaño del arreglo: ");
  scanf("%d", &n);
  return n;
}

int *CreaArreglo(int n) {
  int *A = (int *)malloc(sizeof(int) * n);
  if (!A) {
    printf("Error al crear el arreglo.\n\n");
  }
  return A;
}

void Genera(int *A, int n) {
  srand(time(NULL));
  for (int i = 0; i < n; i++, A++) {
    *A = rand() % 101;
  }
}

void Divide(int *A, int **P, int **I, int n, int *n_par, int *n_impar) {
  int cont1 = 0, cont2 = 0;
  for (int i = 0; i < n; i++) {
    if (*(A + i) % 2 == 0) {
      (*n_par)++;
    }
  }
  *n_impar = n - *n_par;
  *P = CreaArreglo(*n_par);
  *I = CreaArreglo(*n_impar);
  for (int i = 0; i < n; i++, A++) {
    if (*A % 2 == 0) {
      *(*P + cont1) = *A;
      cont1++;
    } else {
      *(*I + cont2) = *A;
      cont2++;
    }
  }
}

void Imprime(int *A, int n) {
  for(int i = 0; i < n; i++, A++) {
    printf("%d ", *A);
  }
  printf("\n");
}

int main() {
  int *A, *P, *I, n, n_par = 0, n_impar = 0;
  n = Captura();
  A = CreaArreglo(n);
  Genera(A, n);
  Imprime(A, n);
  Divide(A, &P, &I, n, &n_par, &n_impar);
  Imprime(P, n_par);
  Imprime(I, n_impar);
  free(A);
  free(P);
  free(I);
}
