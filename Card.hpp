#ifndef _CARD_HPP_
#define _CARD_HPP_

/**
 *
 *
 **/
class Card {
public:
protected:
	std::string name;
	unsigned int manaCost;
	std::string drawing;
	virtual void display();
	Card(std::string name, unsigned int manaCost, std::string drawing);
	virtual ~Card()=0;
private:
};

#endif