///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_AirConditioner.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class Decorator_AirConditioner
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Decorator_AirConditioner.h"

//Decorator_AirConditioner::Decorator_AirConditioner(ICar* car, int price)
//{
//	Decorator::Decorator(car,price);
//}

//int Decorator_AirConditioner::GetPrice()
//{
//}

void Decorator_AirConditioner::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		mComp->Print(stream);
		stream << "Air Conditioner" << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator_AirConditioner::Print: " << error << std::endl;
	}
}