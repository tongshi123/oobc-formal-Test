/*
 * test_addNum.cpp
 *
 *  Created on: 2019年10月27日
 *      Author: tongShi
 */

#include "addNum.h"
#include "gtest/gtest.h"

Test(MyTestCase, MyTest_Success)
{
	EXPECT_EQ(2, MySum(1, 1));
}

Test(MyTestCase, MyTest_Success)
{
       EXPECT_EQ(3, MySum(1, 2));
}

