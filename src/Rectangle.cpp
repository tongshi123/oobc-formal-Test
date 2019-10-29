/*
 * Rectangle.cpp
 *
 *  Created on: 2019年10月29日
 *      Author: tongShi
*/

#include "Rectangle.h"

Rectangle::Rectangle(int height, int width):m_height(height), m_width(width){

};

int Rectangle::getArea() const{
		return m_height * m_width;
	}
