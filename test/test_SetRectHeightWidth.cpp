/*
 * test_GetRectHeightWidth.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: tongShi
*/

#include "Rectangle.h"
#include <gtest/gtest.h>


TEST(SetRectHeightTest, height_set_8_sould_getArea_be_16){
	Rectangle rect(4, 2);
	rect.setHeight(8);
	EXPECT_EQ(16, rect.getArea());
	
}


TEST(SetAbnormalRectHeightTest, height_set_negative_sould_getArea_nochange){
	Rectangle rect(4, 2);
	rect.setHeight(-8);
	EXPECT_EQ(8, rect.getArea());
}


TEST(SetRectWidthTest, width_set_10_sould_getWidth_be_40){
	Rectangle rect(4, 2);
	rect.setWidth(10);
	EXPECT_EQ(40, rect.getArea());
}

TEST(SetAbnormalRectWidthTest, width_set_negative_sould_getArea_nochange){
	Rectangle rect(4, 2);
	rect.setWidth(-10);
	EXPECT_EQ(8, rect.getArea());
}




