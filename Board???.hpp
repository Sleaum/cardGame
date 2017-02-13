#ifndef _BOARD_HPP_
#define _BOARD_HPP_

//#include <memory>
//#include <iostream>

class Board{//stocker avant execution dans fichier text (ou bdd)
public:
	virtual display();
	Board(nom, cost);
	Board(): Card(...);
	virtual ~Board();
protected:
private:
	Hand myhand;
	Graveyard myGraveyard;
	Deck * myDeck;
//attributs
//methodes
};

#endif //_BOARD_HPP_