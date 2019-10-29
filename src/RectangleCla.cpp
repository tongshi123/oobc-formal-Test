/*
 * RectangleCla.cpp
 *
 *  Created on: 2019年10月29日
 *      Author: tongShi
*/

#include "RectangleCla.h"

Rectangle::Rectangle(int height, int wdith):_height(height), _wdith(wdith){

	};

int Rectangle::calculate() const{
		return _height * _wdith;
	}
