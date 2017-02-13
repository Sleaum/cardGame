#ifndef _MYCELL_HPP_
#define _MYCELL_HPP_

/**
 *
 *
 **/
class EnnemyCell{
public:
	void display();
	Deck getInstance();
protected:
private:
	MyCell myCell;
	MyCell();
	virtual ~MyCell();
};

#endif