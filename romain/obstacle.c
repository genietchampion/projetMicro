#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

GPIO_Registres *pGPIO0; // Pointeur sur la structure du GPIO0
GPIO_Registres *pGPIO1; // Pointeur sur la structure du GPIO1

function chargement (void)
{
  float v;
  // On charge les données en entrée sur le GPIO sur le P0.23 dans la valeur v
  v = pGPIO0 -> FIOPIN;  // recopie de p0.23 dans v
  // On renvoie la valeur du voltage en fonction de la luminosité
  return v;
}

function distance (void)
{
  int d = 0;
  int v = chargement; // chargement des données du laser
  d = v / 0,26; // inversion de la fonction
  return d;
}

function arret_obligatoire (d)
{
  int a = 0;
  if (d < 10) 
    { 
      a = 2; // On est trop pres. On doit s'arrêter
    }
  else 
    {
      if (d > 30)
	{
	  a = 1; // On commence à être trop pres
	}
      else
	{
	  a = 0; // On est loin d'un obstacle (sur le front du robot)
	}
    }
  return a;
}

function obstacle_cote (void)
{
  boolean b;
  int d1;
  int d2;
  //chargemet des données des microrupteurs depuis P1.11 et P1.21
  d1 = (PGPIO1 -> FIOPIN) >> 8; // copie de p1.11 sur d1
  d2 = (PGPIO1 -> FIOPIN) >> 14; // copie de p1.12 sur d2
  // Si un des deux boutons est poussé, on envoie un booléen true. Sinon on renvoie false.
  if (d1 /= 0) then {b = true;}
  else 
    {
      if (d2 /=0) then {b = true;}
      else
	{
	  b = false;
	}
    }
  return b;
}
