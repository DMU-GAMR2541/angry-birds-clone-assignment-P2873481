#pragma once
#include "DynamicObject.h"

class Bird : public DynamicObject {
public:
	Bird() = default;
	Bird(b2World& world, std::string str, sf::Vector2f pos, float mass) : DynamicObject(world, str, pos, mass) {
	};

	~Bird() = default;
private:
	int BirdType = 0;

};