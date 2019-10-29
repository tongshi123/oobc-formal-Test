/*
 * test_RectangleCla.cpp
 *
 *  Created on: 2019年10月29日
 *      Author: tongShi
*/


#include "RectangleCla.h"
#include <gtest/gtest.h>

TEST(RectangleCalTest, TEST1){
	Rectangle rect(3, 4);
	EXPECT_EQ(12, rect.calculate());

}

