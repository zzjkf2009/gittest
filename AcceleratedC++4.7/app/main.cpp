#include <iostream>
#include <vector>
#include"Average.hpp"       

int main()
{
   	Grade_System average;
	std::vector<double> vect;              // build a vector of numbers
	double num;                            // varible number
	std::cout<<"Please input numbers"<<std::endl;

	while(std::cin>>num){                  // read numbers from input
	   vect.push_back(num);
	}

  std::cout<<"The average of all numbers is: "<< average.get_average(vect)<<std::endl;      //print out the calculated average 

    return 0;
}
