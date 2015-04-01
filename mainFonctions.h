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

float chargement (void); // permet de convertir le signal du laser
float distance (void); // définit la distance avant l'obstacle situé à l'avant
int arrêt obligatoire (int d); // Nécesaire pour rester dans le domaine de bijectivité de la fonction (sinon on peut pas donner la distance)
bool obstaclecote (void); // revoie true si un obstacle est situé sur un côté
