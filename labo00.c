/* HEIG-VD - INFO2 - Labo00
 *
 * Auteur:      Mathieu Ghennai
 * Fichier:     Labo00.c
 * Compilateur: VS2019
 *
 * Description :
 * Lit une phrase, compte le nombre ne mots, l'affiche et affiche chaque mot.
 *
 *
 * Remarque(s) :
 * 
 *
 * Modifications
 * Date         Auteur  Commentaires
 * 17.02.2020   GHM     Ecriture du code
 */

 // Bibliotheques utilisees
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

#define SIZE 30

// Programme principal
int main(void)
{
    char tableau[SIZE][SIZE] = { 0 }; //Les mots y seront stockés

    char c = 0; //Pour la lecture de chaque lettre l'une après l'autre.

    int i = 0, j = 0, //Compteurs d'itération
    nombre_mots = 0;


    
    printf("\n\t Phrase : ");
    
    do // Lecture et comptage des mots
    {
        scanf("%c", &c);

        i++; // Changement de colonne

        if (c == ' ')
        {
            nombre_mots++;
            i = 0;
        }
        tableau[nombre_mots][i] = c;

    } while (c != '\n');

    nombre_mots++;

    printf("Nombre de mots : %d\n\t", nombre_mots);

    for (i = 0; i < nombre_mots; i++) // Affichage des mots
    {
        for (j = 0; j < SIZE; j++)
            printf("%c", tableau[i][j]);

        printf("\n\t");
    }

    system("PAUSE");
	return EXIT_SUCCESS;
}
