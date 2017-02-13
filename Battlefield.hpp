#ifndef _BATTLEFIELD_HPP_
#define _BATTLEFIELD_HPP_

/**
 *
 *
 **/
class BattleField{
public:
	vector<MyCell> myCells;
	vector<EnnemyCell> ennemyCells;
	MyHero myHeros;
	EnnmyHero ennemyHeros;
	display();
	Deck getInstance();
protected:
private:
	BattleField battleField;
	BattleField();
	virtual ~BattleField();
};

#endif 