//
// Created by louan on 12/03/22.
//

#include "filtrer.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
   int size;
   printf("Entrer la taille du tableau T : ");
   scanf("%d", &size);
   int randT[size];
   for (int i = 0; i < size; i++)
      randT[i] = rand() % 100;   //Generate number between 0 to 99
   printf("\nTableau T, généré (pseudo-) aléatoirement : [ ");
   for (int i = 0; i < size; i++)
      printf("%d ", randT[i]);
   printf("]\n");

   int new_size = filtrer(randT, size);

   printf("\nTableau T, filtré : [ ");
   for (int i = 0; i < new_size; i++)
      printf("%d ", randT[i]);
   printf("]\n");

   return 0;
}