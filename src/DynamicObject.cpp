#include "DynamicObject.h"

DynamicObject::DynamicObject(b2World& world, std::string str, sf::Vector2f pos, float mass) {
	BodyDef.type = b2_dynamicBody;
	BodyDef.position = b2Vec2(pos.x / scale, pos.y / scale);
	Body = world.CreateBody(&BodyDef);

	if (!texture.loadFromFile(str)) {
		std::cout << "ERR: Texture not loaded from: " << str << std::endl;
	}
	else {
		sprite.setTexture(texture);

		sprite.setOrigin(texture.getSize().x / 2.0f, texture.getSize().y / 2.0f);
	}

	BodyShape.m_radius = (texture.getSize().x / 2.0f) / scale;

	FixtureDef.shape = &BodyShape;
	FixtureDef.density = mass;
	FixtureDef.friction = 0.3f;
	FixtureDef.restitution = 0.5f;

	Body->CreateFixture(&FixtureDef);
}

void DynamicObject::Render(sf::RenderWindow& window) {
	window.draw(sprite);
}
void DynamicObject::Update() {
	sprite.setPosition(Body->GetPosition().x * scale, Body->GetPosition().y * scale);
	sprite.setRotation(Body->GetAngle() * 180.0f / PI);
}
