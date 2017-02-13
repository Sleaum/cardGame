#ifndef _MANAPOOL_HPP_
#define _MANAPOOL_HPP_

/**
 *
 *
 **/
class ManaPool{
public:
	void add();
	bool isFull();
	bool isEmpty();
	display();
	Deck getInstance();
protected:
private:
	ManaPool manaPool;
	ManaPool();
	virtual ~ManaPool();
};

#endif 