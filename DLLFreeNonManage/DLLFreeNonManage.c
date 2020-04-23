/** Ciprian DRAGULESCU 22 avril 2020
  *
  * bibliotheque de liens dynamiques (DLL) qui contient une fonction pour desallouer un bloc de memoire precedemment alloue avec malloc ou calloc
  *
  * DLL that contains a function to deallocate a block of memory previously allocated with either malloc or calloc
  */

#include <stdlib.h>

/** Methode de desallocation d'un bloc de memoire
  * @param bloc le pointeur au bloc de memoire a desallouer
  */
__declspec(dllexport) void freeNonManage(void* bloc)
{
	free(bloc);
}