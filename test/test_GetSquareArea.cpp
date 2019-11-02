/*
 * test_GetSquareArea.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: tongShi
 */
   
#include "Rectangle.h"
#include <gtest/gtest.h>

TEST(GetSquareaTest, length_is_5_area_should_be_25){
	Rectangle rqu(5);
	EXPECT_EQ(25, rqu.getArea());
}
TEST(GetAbnormalSquareaTest, length_is_negative_area_should_be_0){
	Rectangle rqu(-5);
	EXPECT_EQ(0, rqu.getArea());
}



