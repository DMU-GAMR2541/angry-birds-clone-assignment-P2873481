#include <gtest/gtest.h>
#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>
#include "Enemy.h"
#include "Slingshot.h"
#include "Bird.h"
#include "Pig.h"
#include "DynamicObject.h"
#include "StaticObject.h"
#include "GameObject.h"


/// <summary>
///Taken from the GoogleTest primer. 
/// </summary>

/* // The fixture for testing class Foo.
class EnemyTest : public testing::Test {
public:
    std::unique_ptr<Enemy> enemy;
protected:
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    EnemyTest() {
        // You can do set-up work for each test here.
                    
    }

    ~EnemyTest() override {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
        enemy = std::make_unique<Enemy>(50); // All enemnies in this test suite start with 50 HP.
                    
    }

    void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }


};*/

class ParamTest : public::testing::TestWithParam<int> {
protected:
    ParamTest() = default;
    ~ParamTest() = default;

    void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).

    }

    void TearDown() override {

    }
};

/* //A single test, not a fixture. No setup is called.
TEST(Enemy, First_test) {
    Enemy e(100);
    std::cout << e.getHealth() << " " << 100 << std::endl;
    //EXPECT_GT(e.getHealth(), 100);
    EXPECT_EQ(e.getHealth(), 100);
    SUCCEED() << "Test test passed";
    FAIL() << "Test didn't pass";
}

TEST_F(EnemyTest, LethalDamagePopsPig) {
    enemy->takeDamage(60);
    EXPECT_TRUE(enemy->checkIfPopped());
}

TEST_P(ParamTest, SimpleTest) {
        int i_test = GetParam();
        std::cout << "Param value:: " << i_test << std::endl;
        EXPECT_GT(i_test, 1);
    }

INSTANTIATE_TEST_SUITE_P(
    Simple,
    ParamTest, ::testing::Values(1, 2, 3, 4, 5)
);*/

class PigTest : public testing::Test {
public:
    std::unique_ptr<Pig> pig;
protected:
    PigTest() {

    }
    ~PigTest() override {

    }

    void SetUp() override {
        

    }

    void TearDown() override {

    }
};

class BirdTest : public testing::Test {
public:
    std::unique_ptr<Bird> bird;
protected:
    BirdTest() {

    }
    ~BirdTest() override {

    }

    void SetUp() override {
        

    }

    void TearDown() override {

    }
};

class MoveTest : public::testing::TestWithParam<int> {
public:
    std::unique_ptr<DynamicObject> obj;
protected:
    MoveTest() {
    
    }
    ~MoveTest() {
    
    }

    void SetUp() {

    }

    void TearDown() {

    }
};

TEST(MoveTest, first_test) {
    b2Vec2 b2_gravity(0.0f, 0.0f); // No gravity for testing purposes
    b2World world(b2_gravity);
    DynamicObject obj(world, ".. / assets / Ang_Birds / YellowBird.png", sf::Vector2(250.0f, 400.0f), 0.4);



    sf::Vector2 newPos = sf::Vector2(550.0f, 400.f);

    std::cout << "Move Object to 550, 400 fro 250. 400" << std::endl;


}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}