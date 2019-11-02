/*  test_GetSquareCircum.cpp
 *
 *  Created on: 2019年11月2日
 *      Author: tongShi
*/

#include "Rectangle.h"
#include <gtest/gtest.h>

TEST(GetSquareCircumTest, length_is_5_circum_should_be_20){
	Rectangle squ(5);
	EXPECT_EQ(20, squ.getCircum());
}

TEST(GetAbnormalSquareCircumTest, length_is_negative_circum_should_be_0){
     Rectangle squ(-5);
     EXPECT_EQ(0, squ.getCircum());
}

