/*********************************************************
* variables globales
**********************/
// variables globales messages
typedef struct message
{
	char dir;
	int valeur;
}typeMessage;

typeMessage tabMessage[8];

//variables globales de déplacement
int speed, distance, angle;
/**************************
**	Deplacements				**
**************************/
//avancer
void forward(int speed, int distance);
//tourner
void rotation(int angle);
//arreter
void stop();

/*******************
** Affichage  ecran LCD
********************/

//initialiser l'ecran
void initScreen();
//affichage
void printScreen(char * message, char posX, char posY);
//nettoyer
void clearScreen();

/*********************
** Émission IR 
*********************/

void emitMessage(typeMessage * tableau);

/****************
** Réception IR
****************/

//TODO Etienne, à toi de remplir cette partie

/***************
** SON
****************/

//TODO by Etienne et Bichonche


/***************
** Gestion de la distance
****************/
function chargement (void) // Charge la tension lié à  la distance de l'obstacle
function distance (void) // Transforme la fonction en distance (en cm)
function arret_obligatoire (int d) // Dis si le robot est trop près de l'obstacle (domaine de non bijectivité de la fonction de tension en fonction de la distance)
function obstacle_cote (void) // Renvoie true si un obstacle est situé sur le coté
