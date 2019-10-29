/*
 * test_GetRectArea.cpp
 *
 *  Created on: 2019年10月29日
 *      Author: tongShi
*/


#include "Rectangle.h"
#include <gtest/gtest.h>

TEST(GetRectAreaTest, h3_w4_area_should_be_12){
	Rectangle rect(3, 4);
	EXPECT_EQ(12, rect.getArea());
}

TEST(GetRectAreaTest, hw_is_negative_area_should_be_0){
	Rectangle rect(-1, -2);
	EXPECT_EQ(0, rect.getArea());
}

TEST(GetRectAreaTest, h_or_w_is_negative_area_should_be_0){
	Rectangle rect(4, -2);
	EXPECT_EQ(0, rect.getArea());
}
