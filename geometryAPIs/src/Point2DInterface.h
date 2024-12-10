#pragma once

//Forward declarations
class Point2D;

class Point2DInterface
{
public:

	//Function to get x co-ordinate of the point 
	virtual double GetX()const = 0;

	//Function to get y co-ordinate of the point
	virtual double GetY()const = 0;

	//Function to get x and y co-ordinate of the point
	virtual void  GetXY(double& x, double& y)const = 0;

	//Function to set x co-ordinate of the point 
	virtual void SetX(double x) = 0;

	//Function to set y co-ordinate of the point 
	virtual void SetY(double y) = 0;

	//Function to set x and y co-ordinate of the point 
	virtual void SetXY(double x, double y) = 0;

	//This function calculate the distance between two points
	virtual double GetDistance(Point2D secondPoint)const = 0;

	//Overload * operator for multiplication of point with scalar value
	virtual Point2D operator*(const double scalar)const = 0;
	
	//Function to add two points
	virtual Point2D operator+(const Point2D& otherPoint)const = 0;

	//Destructor
	virtual ~Point2DInterface() = default;
};