/**
 * \file filtrer.c
 * \brief Source code pour la fonction filtrer
 * \author Robert Louan
 * \version 1.0
 * \date 12/3/2022
 */

#include "filtrer.h"
#include "propriete.h"
#include <assert.h>
#include <stdlib.h>

int filtrer(int *T, int N) {
   // Programmation défensive
   assert(T != NULL);
   assert(N >= 0);

   int i = 0, j = 0;
   while (i < N) {
      if (!test(T[i])) { // T[i] ne vérifie pas la propriete
         T[i] = 0;
      } else { // T[i] vérifie la propriete
         T[j] = T[i];
         T[i] = 0;
         j++;
      }
      i++;
   }
   return j;
}

