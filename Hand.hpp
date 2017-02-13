#ifndef _HAND_HPP_
#define _HAND_HPP_

/**
 *
 *
 **/
class Hand{
public:
	void select();
	bool isFull();
	bool isEmpty();
	//draw();
	void display();
	Hand getInstance();
protected:
private:
	std::vector<share_ptr<Carte>> cartes;
	Hand hand;
	Hand(const string cardList);
	virtual ~Hand();
};

#endif 