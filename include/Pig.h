#pragma once
#include "DynamicObject.h"

class Pig : public DynamicObject {
public:
	Pig() = default;
	Pig(b2World& world, std::string str, sf::Vector2f pos, float mass) : DynamicObject(world, str, pos, mass) {
	};

	void SetPigScale(float value) {
		scale = value;
	}
private:
	int PigHP = 100;
	int PigType = 0;
};