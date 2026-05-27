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

TEST(MoveTest, array_test) {
    sf::Vector2 pos = sf::Vector2(250.0f, 0.0f);

    float arr[5]{ 550.f, 110.f, 250.f, 760.f, 1050.f };
    
    for (int i = 0; i <= 4; i++) {
        sf::Vector2 newPos = sf::Vector2(arr[i], 0.f);
        
        std::cout << "TEST: Move Object to position " << newPos.x << " from " << pos.x << std::endl;
        
        ASSERT_NE(newPos.x, pos.x);
    }
        
    
}

TEST(ParamTest, calc_test) {
    sf::Vector2 obj1 = sf::Vector2(250.f, 0.f);
    sf::Vector2 obj2 = sf::Vector2(600.f, 0.f);
    sf::Vector2 obj3 = sf::Vector2(250.f, -100.f);
    sf::Vector2 obj4 = sf::Vector2(720.f, 400.f);

    std::cout << "TEST: Primitively comparing object positions between 1: '" << obj1.x << " " << obj1.y << "', 2: '" << obj2.x << " " << obj2.y << "', 3: '"
        << obj3.x << " " << obj3.y << "' and 4: '" << obj4.x << " " << obj4.y << "'." << std::endl;

    std::cout << "Equal x values between Objects 1 and 3:" << std::endl;
    EXPECT_EQ(obj1.x, obj3.x);

    std::cout << "Greater x values between 1 and 2" << std::endl;
    EXPECT_GT(obj2.x, obj1.x);

    std::cout << "Lesser y value between 1 and 3" << std::endl;
    EXPECT_LT(obj3.y, obj1.y);

    std::cout << "Greater y value between 1 and 4" << std::endl;
    EXPECT_GT(obj4.y, obj1.y);

    std::cout << "Greater x value between 1 and 4" << std::endl;
    EXPECT_GT(obj4.x, obj1.x);

    std::cout << "Equal y between 1 and 2" << std::endl;
    EXPECT_EQ(obj1.y, obj2.y);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}