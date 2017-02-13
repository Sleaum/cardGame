#ifndef _MYHERO_HPP_
#define _MYHERO_HPP_

/**
 *
 *
 **/
class MyHero{
public:
	void display();
	Deck getInstance();
protected:
private:
	MyHero myHero;
	MyHero();
	virtual ~MyHero();
};

#endif 