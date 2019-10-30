/*  test_GetRectCircum.cpp
 *
 *  Created on: 2019年10月30日
 *      Author: tongShi
*/


#include "Rectangle.h"
#include <gtest/gtest.h>


TEST(GetRectCircumTest, h4_w2_circum_should_be_12){
	Rectangle rect(4, 2);
	EXPECT_EQ(12, rect.getCircum());
}



TEST(GetAbnormalRectCircumTest, hw_is_gegative_circum_should_be_0){
	Rectangle rect(-4, -2);
	EXPECT_EQ(0, rect.getCircum());
}

TEST(GetAbnormalRectCircumTest, h_is_negative_circum_should_be_0){
	Rectangle rect(-4, 2);
	EXPECT_EQ(0, rect.getCircum());
}
TEST(GetAbnormalRectCircumTest, w_is_negative_circum_should_be_0){
	Rectangle rect(4, -2);
	EXPECT_EQ(0, rect.getCircum());
}
TEST(GetAbnormalRectCircumTest, h_is_0_circum_should_be_0){
	Rectangle rect(0, 2);
	EXPECT_EQ(0, rect.getCircum());
}
TEST(GetAbnormalRectCircumTest, w_is_0_circum_should_be_0){
	Rectangle rect(4, 0);
	EXPECT_EQ(0, rect.getCircum());
}


