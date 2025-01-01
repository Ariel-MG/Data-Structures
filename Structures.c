#include <stdio.h>
//---------------Estrcutura Alumno----------------------
struct alumno {
  int exp;
  int materia[3];
};

//---------------Funcion Expediente---------------------
void impresion(struct alumno *ap) {
  printf("\nNumero Expediente. %d", ap->exp);
  for (int i = 0; i < 3; i++) {
    printf("\nMateria %d: %d", i + 1, ap->materia[i]);
  }
}

//----------------Funcion promedio----------------------

void promedio_final(struct alumno *ap) {
  int suma = 0;
  float p = 0;
  for (int i = 0; i < 3; i++) {
    suma = suma + ap->materia[i];
  }
  p = suma / 3;
  printf("\npromedio: %f", p);
  // printf("\nsuma : %d",suma);
}

//----------------------Main----------------------------
int main() {
  // STRUCT ALUMNO
  struct alumno A;
  struct alumno B;
  // APUNTADORES
  struct alumno *apA = &A;
  struct alumno *apB = &B;

  // ASIGNAR MATRICULA
  A.exp = 379435;
  B.exp = 359437;

  // Ciclo para poder introducir datos a la estructura     del alumno A
  printf("Ingresa las calificaciones de alumno A\n");
  for (int i = 0; i < 3; i++) {
    scanf("\n%d", &apA->materia[i]);
  }
  // Ciclo para poder introducir datos a la estructura del alumno B
  printf("\nIngresa las calificaciones de alumno B\n");
  for (int i = 0; i < 3; i++) {
    scanf("\n%d", &apB->materia[i]);
  }

  printf("------------INFORMACION DE A------------------");

  // ALUMNO A
  printf("\nImprecion de expediente y calificaciones de A");
  impresion(apA);
  // Promedio
  promedio_final(apA);

  printf("\n------------INFORMACION DE B------------------");
  // ALUMNO B
  printf("\nImprecion de expediente y calificaciones de B");
  impresion(apB);
  // Promecio
  promedio_final(apB);

  printf("\n----------INFORMACION DE APUNTADORES-----------");
  printf("\ndireccion de apuntador A : %u", apA);
  printf("\ndireccion de apuntador B : %u", apB);
}
