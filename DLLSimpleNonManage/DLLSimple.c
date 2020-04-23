/** Ciprian DRAGULESCU 22 avril 2020
  *
  * bibliotheque de liens dynamiques (DLL) qui contient des methodes pour tester l'interoperabilite entre code manage et non manage
  *
  * DLL that contains a number of functions to test the interoperability of managed and unmanged code
  */

#include <stdlib.h>



/** Methode prennant une valeur flottante double en entree
  * @param d le flottant double auquel aditionner une valeur flottante test
  * @return la somme du flottant d'entree et le flottant test
  */
__declspec(dllexport) double doubleNext(double d)
{
	return d + 0.22;
}

/** Methode test prennant une valeur entiere en entree
  * @param i l'entier auquel additionner une valeur entiere test
  * @return la somme de l'entier d'entree et l'entier test
  */
__declspec(dllexport) int intNext(int i)
{
	return i + 2;
}

/** Methode qui alloue un bloc de memoire avec malloc et le remplit avec une chaine test 
  * @return le pointeur a la chaine
  */
__declspec(dllexport) char* testString()
{
	char* chaine = (char*)malloc(sizeof(char) * 6);
	chaine[0] = 'M';
	chaine[1] = 'e';
	chaine[2] = 'O';
	chaine[3] = 'w';
	chaine[4] = 0;

	return chaine;
}
/** Methode qui remplit un bloc de memoire avec une chaine test
  * @param mem le pointeur au tableau de char a remplir
  * @param nbCar la taille du bloc de memoire (nombre maximum de caracteres qu'il peut contenir, y compris le '\0' final)
  */
__declspec(dllexport) void remplirMemoireChaine(char* mem, int nbCar)
{
	int i = 0;
	while (i < nbCar - 1)
	{
		for (char j = '0'; j <= '9' && i < nbCar - 1; j++)
		{
			mem[i] = j;
			i++;
		}
	}
	mem[i] = 0;
}