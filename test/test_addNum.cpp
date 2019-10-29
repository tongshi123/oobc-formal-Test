/*
 * test_addNum.cpp
 *
 *  Created on: 2019年10月27日
 *      Author: tongShi
 */

#include "addNum.h"
#include <gtest/gtest.h>

/*
TEST(AddNumTest, two_plus_three_should_be_five){


}
*/


TEST(MyTestCase, MyTest_Success)
{
	EXPECT_NE(4, MySum(1, 1));
}
/*

TEST(MyTestCase, MyTest_Success)
{
       EXPECT_EQ(3, MySum(1, 2));
}
*/
