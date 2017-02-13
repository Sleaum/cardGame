#ifndef _GRAVEYARD_HPP_
#define _GRAVEYARD_HPP_

/**
 *
 *
 **/
class Graveyard{
public:
	select();
	bool isFull();
	bool isEmpty();
	//draw();
	display();
	Graveyard getInstance();
protected:
private:
	std::vector<share_ptr<Carte>> cartes;
	Graveyard graveyard;
	Graveyard(const& string cardList);
	virtual ~Graveyard();
};

#endif 