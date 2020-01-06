/*************************************************************************
 * *Author: Paul Leone
 * *Date: 2/6/2019
 * *Description: This file is the class specification file for Taxicab
 * *		 that records the location and travel distance.
 * **********************************************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
	private:
		int xCoord, yCoord, travelDistance;

	public:
		Taxicab();
		Taxicab(int, int);
		int getXCoord();
		int getYCoord();
		int getDistanceTraveled();
		void moveX(int);
		void moveY(int);
};
#endif
