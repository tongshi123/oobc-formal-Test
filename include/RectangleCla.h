/*
 * RectangleCla.h
 *
 *  Created on: 2019年10月29日
 *      Author: tongShi
*/

#ifndef INCLUDE_RECTANGLE_H
#define INCLUDE_RECTANGLE_H

class Rectangle
{
public:
	Rectangle(int height, int wdith);
	int calculate() const;
	
private:
	int _height;
	int _wdith;
};

#endif /*INCLUDE_RECTANGLE_H*/



