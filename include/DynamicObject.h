#pragma once
#include "GameObject.h"

class DynamicObject : virtual public GameObject {
public:
	DynamicObject() = default;
	DynamicObject(b2World& world, std::string str, sf::Vector2f pos, float mass);

	~DynamicObject() = default;

	void Render(sf::RenderWindow& window) override;
	void Update() override;
	
private:
	sf::Sprite sprite;		// The Dynamic Object's sprite
	b2Vec2 b2Pos;				// Position of object in game world.
	b2Body* Body;
	b2BodyDef BodyDef;			// Defines the object body in Box2D physics.
	b2FixtureDef FixtureDef;	// Defines our fixtures for the object body in Box2D.
	b2CircleShape BodyShape;	// The shape of the object
	sf::Texture texture;		// Texture of the object in question
	float scale = 30.f;
	const float PI = 3.1415927;

	// int const entityID;			// The overall number ID of the DynamicObject in question.
};

