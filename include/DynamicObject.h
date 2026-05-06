#pragma once
#include "GameObject.h"

class DynamicObject {
public:
	void Render(sf::RenderWindow& window);
	void Update();
private:
	sf::Sprite ObjSprite; // The Dynamic Object's sprite

	b2Body PhysBody; // The physics body in Box2D
	b2Vec2 b2Pos; // Position of object in game world.
	b2BodyDef BodyDef; // Defines the object body in Box2D physics.
	b2FixtureDef FixtureDef; // Defines our fixtures for the object body in Box2D.
};