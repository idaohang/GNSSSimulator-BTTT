// Simulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "Simulator.h"
#include "trajectoryReader.h"
#include <string>
#include "GNSStime.h"
//GPSTK includes
#include "RefTime\TimeSystem.hpp"



int _tmain(int argc, _TCHAR* argv[])
{
	double llh[3] = { 0.75, 0.75, 100 };
	double ecef[3] = {0,0,0};


	std::cout << gpstk::TimeSystem::getLeapSeconds(1993, 9, 21);
	getchar();
	//pos2ecef(llh, ecef);
	//TEstcomment
	// TestCommit2
	return 0;
}

void Simulator::llh2ecef(double *, double *)
{

}
