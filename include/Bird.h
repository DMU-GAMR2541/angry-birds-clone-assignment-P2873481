#pragma once
#include "DynamicObject.h"

class Bird : public DynamicObject {
public:
	Bird() = default;
	Bird(b2World& world, std::string str, sf::Vector2f pos) : DynamicObject(world, str, pos) {
	}
private:
	int BirdType = 0;

};