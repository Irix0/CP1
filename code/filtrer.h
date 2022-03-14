/**
 * \file filtrer.h
 * \brief Header pour filtrer
 * \author Robert Louan
 * \version 1.0
 * \date 12/3/2022
 *
 * Implémente la fonction filtrer().
 */

#ifndef CP1_FILTRER_H
#define CP1_FILTRER_H

/*
  * @pre: (>\coms{$T$}<) initialisé (>\coms{$\wedge N\geq 0$}<)
  * @post: (>\coms{$T$}<) perm (>\coms{$T_0 \wedge N = N_0 \wedge filtre(T, n)$}<)
  */
int filtrer(int *T, int N);

#endif //CP1_FILTRER_H
