/*
	Code Hexadécimal :
	0xa1 x y => se positionne à la position x y.
	0xa2 string 0 => Ecrit une chaîne de caractère, 0 est le code de fin.
	0xa3 0x01 => Efface l'écran.
*/

void printScreen(char * string, char posX, char posY) {
	printf("%c%c%c",0xa1,posX,posY); //Se positionne à la position voulue.
	printf("%c%s %c",0xa2,string,0); //Ecrit la chaîne de caractère voulue.
}

void clearScreen() {
	printf("%c%c",0xa3,0x01);
}

