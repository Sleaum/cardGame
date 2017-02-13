#ifndef _ENNEMYHERO_HPP_
#define _ENNEMYHERO_HPP_

/**
 *
 *
 **/
class EnnemyHero{
public:
	void display();
	Deck getInstance();
protected:
private:
	EnnemyHero ennemyHero;
	EnnemyHero();
	virtual ~EnnemyHero();
};

#endif