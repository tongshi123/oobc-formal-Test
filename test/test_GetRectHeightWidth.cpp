/*
 * test_GetRectHeightWidth.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: tongShi
*/

#include "Rectangle.h"
#include <gtest/gtest.h>

TEST(GetRectHeightTest, height_is_4_sould_getHeight_4){
	Rectangle rect(4, 2);
	EXPECT_EQ(4, rect.getHeight());
}

TEST(GetAbnormalRectHeightTest, height_is_negative_sould_getHeight_0){
	Rectangle rect(-4, 2);
	EXPECT_EQ(0, rect.getHeight());
}

TEST(GetRectWidthTest, width_is_2_sould_getWidth_2){
	Rectangle rect(4, 2);
	EXPECT_EQ(2, rect.getWidth());
}

TEST(GetAbnormalRectWidthTest, width_is_negative_sould_getWidth_0){
	Rectangle rect(4, -2);
	EXPECT_EQ(0, rect.getWidth());
}




TEST(SetRectHeightTest, height_set_8_sould_getHeight_8){
	Rectangle rect(4, 2);
	rect.setHeight(8);
	EXPECT_EQ(8, rect.getHeight());
}

TEST(SetAbnormalRectHeightTest, height_set_negative_sould_getHeight_0){
	Rectangle rect(4, 2);
	rect.setHeight(-8);
	EXPECT_EQ(0, rect.getHeight());
}

TEST(SetRectWidthTest, width_set_10_sould_getWidth_10){
	Rectangle rect(4, 2);
	rect.setWidth(10);
	EXPECT_EQ(10, rect.getWidth());
}

TEST(SetAbnormalRectWidthTest, width_set_negative_sould_getWidth_0){
	Rectangle rect(4, 2);
	rect.setWidth(-10);
	EXPECT_EQ(0, rect.getWidth());
}





