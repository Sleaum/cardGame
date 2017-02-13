#ifndef _SPELL_HPP_
#define _SPELL_HPP_

/**
 *
 *
 **/
class Spell: public Card{
public:
	void doEffect();
	virtual display();
	Spell(const string nom, const uint manaCost, const string drawing)
		: Card(nom:nom, manaCost:manaCost, drawing:drawing);
	virtual ~Spell();
protected:
private:
	Spell();
};

#endif