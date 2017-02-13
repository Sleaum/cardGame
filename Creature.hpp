#ifndef _CREATURE_HPP_
#define _CREATURE_HPP_

/**
 *
 *
 **/
class Creature: public Card{
public:
	virtual void attack();
	virtual void display();
	Creature(std::string name, unsigned int manaCost, std::string drawing, unsigned int attack, unsigned int health)
		: Card(name(name), manaCost(manaCost), drawing(drawing)), attackPoint=attack, healthPoint=health;
	virtual ~Creature();
protected:
	unsigned int attackPoint;
	unsigned int healthPoint;
private:
	Creature();
};

#endif //_CREATURE_HPP_