/*
 * Rectangle.h
 *
 *  Created on: 2019年10月29日
 *      Author: tongShi
*/

#ifndef INCLUDE_RECTANGLE_H
#define INCLUDE_RECTANGLE_H

class Rectangle
{
public:
	Rectangle(int height, int width);
	int getArea() const;
	
private:
	int m_height;
	int m_width;
};

#endif /*INCLUDE_RECTANGLE_H*/



