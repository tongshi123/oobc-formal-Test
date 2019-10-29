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

