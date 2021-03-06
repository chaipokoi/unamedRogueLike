#ifndef CONST_H
#define CONST_H

/*
	CONST.h
	/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Vous trouverez ci-dessous une sucession de d�finition de constantes sous forme de Macro visant � faciliter la modification � post�riori du code
*/

//DEFINITION DE VARIABLES RELATIVES A L'AFFICHAGE
#define DEVICE_WIDTH 480
#define DEVICE_HEIGHT 800

//DEFINITION DES VARIABLES RELATIVES A LA GENERATION DU DONJON
#define DUNGEON_WIDTH_MAX 100
#define DUNGEON_HEIGHT_MAX 100
#define DUNGEON_ROOM_MAX 25
#define ROOM_WIDTH_MAX 20
#define ROOM_HEIGHT_MAX 20

//DEFINITION DES VALEURS DES CASES
#define CELL_EMPTY 0x00
#define CELL_FLOOR 0x01
#define CELL_WALL 0x02
#define CELL_HWALL 0x03
#define CELL_VWALL 0x04


//DEFINITION VARIABLES RESEAU
#define NETWORK_PORT 6666
#define NETWORK_MAX_BUFFER 32
#define NETWORK_STOP 0x00 //définition des messages réseaux
#define NETWORK_KILL 0x01
#define NETWORK_NEXT 0x02
#define NETWORK_SENDPORT 0x03
#define NETWORK_SENDMAP 0x04
#define NETWORK_ASKMAP 0x05


#endif
