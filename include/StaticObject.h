#pragma once
#include "GameObject.h"

class StaticObject : virtual public GameObject {
public:
	StaticObject() = default;

	void Render(sf::RenderWindow& window);
	void Update();
private:

};