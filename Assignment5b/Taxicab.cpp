/*************************************************************************
 * *Author: Paul Leone
 * *Date: 2/6/2019
 * *Description: This file is the member function for Taxicab that 
 * *		 records the location and travel distance.
 * **********************************************************************/

#include <iostream>
#include "Taxicab.hpp"

/******************************************************************
 * This is the default constructor that will initialize 
 * everything to 0.
 * ***************************************************************/

Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	travelDistance = 0;
}

/******************************************************************
 * The constructor will input the initial coordinate and set
 * travel distance to 0.
 * ***************************************************************/

Taxicab::Taxicab(int xCoord1, int yCoord1)
{
	xCoord = xCoord1;
	yCoord = yCoord1;
	travelDistance = 0;
}

/*****************************************************************
 * This is the member function to retrive the x and y coordinate
 * **************************************************************/

int Taxicab::getXCoord()
{
	return xCoord;
}

int Taxicab::getYCoord()
{
	return yCoord;
}

/*****************************************************************
 * This is the member function to return the distance traveled
 * **************************************************************/

int Taxicab::getDistanceTraveled()
{
	return travelDistance;
}

/****************************************************************
 * This is the member function to move in X coordinate and 
 * update the distance traveled.
 * *************************************************************/

void Taxicab::moveX(int xCoord1)
{
	xCoord += xCoord1;
	if (xCoord1 < 0)
	{
		travelDistance += (-1 * xCoord1);
	}
	else
	{
		travelDistance += xCoord1;
	}
}

/*****************************************************************
 * This is the member function to move in Y coordinate and update
 * the distance traveled.
 * ***************************************************************/
void Taxicab::moveY(int yCoord1)
{
	yCoord += yCoord1;
	if (yCoord1 < 0)
	{
		travelDistance += (-1 * yCoord1);
	}
	else
	{
		travelDistance += yCoord1;
	}
}	

