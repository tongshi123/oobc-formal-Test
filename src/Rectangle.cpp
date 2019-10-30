/*
 * Rectangle.cpp
 *
 *  Created on: 2019年10月30日
 *      Author: tongShi
*/

#include "Rectangle.h"

Rectangle::Rectangle(int height, int width):m_height(height), m_width(width){

};

int Rectangle::getArea() const{
	if(m_height > 0 && m_width > 0){
		return m_height * m_width;
	}
	else
		return 0;
}

int Rectangle::getCircum() const{
	if(m_height > 0 && m_width > 0){
		return (m_height + m_width) * 2;
	}
	else
		return 0; 	
}