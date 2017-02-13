#ifndef _DECK_HPP_
#define _DECK_HPP_

/**
 *
 *
 **/
class Deck{
public:
	add(Card& card);
	suffle();
	bool isFull();
	bool isEmpty();
	//draw();
	display();
	Deck getInstance();
protected:
private:
	std::vector<share_ptr<Carte>> cartes;
	Deck deck;
	Deck(const& string cardList);
	virtual ~Deck();
};

#endif 