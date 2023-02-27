#include "pch.h"
#include "../BattleShipGame/RectangleBoundary.h"
#include "../BattleShipGame/Coordinate.h"
#include "../BattleShipGame//Coordinate.cpp"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(BoundaryContainsTest_0_0, BoundaryTest) {
	Coordinate hitLocation(0, 0);
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	RectangleBoundary rectBoundary(topLeft, bottomRight);
	EXPECT_EQ(true, rectBoundary.contains(hitLocation));
}

TEST(BoundaryContainsTest_7_7, BoundaryTest) {
	Coordinate hitLocation(7, 7);
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	RectangleBoundary rectBoundary(topLeft, bottomRight);
	EXPECT_EQ(true, rectBoundary.contains(hitLocation));
}

TEST(BoundaryContainsTest_8_8, BoundaryTest) {
	Coordinate hitLocation(8, 8);
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	RectangleBoundary rectBoundary(topLeft, bottomRight);
	EXPECT_EQ(true, rectBoundary.contains(hitLocation));
}

TEST(BoundaryContainsTest_10_10_OutOfBoundary, BoundaryTest) {
	Coordinate hitLocation(10, 10);
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	RectangleBoundary rectBoundary(topLeft, bottomRight);
	EXPECT_EQ(false, rectBoundary.contains(hitLocation));
}

TEST(BoundaryallCoordinates_Size, BoundaryTest) {
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	RectangleBoundary rectBoundary(topLeft, bottomRight);
	EXPECT_EQ(64, rectBoundary.allCoordinate().size());
}

TEST(BoundaryallCoordinates_Index, BoundaryTest) {
	Coordinate topLeft(0, 0);
	Coordinate bottomRight(8, 8);
	RectangleBoundary rectBoundary(topLeft, bottomRight);
	EXPECT_EQ(0, rectBoundary.allCoordinate()[1].getX());
	EXPECT_EQ(1, rectBoundary.allCoordinate()[1].getY());
}