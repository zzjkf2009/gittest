#include <iostream>
#include <vector>

#ifndef AVERAGE_H   
#define AVERAGE_H

// This function will take a vector of numbers as input and calculate the average of the those numbers as output 
 

class Grade_System 
{

public:
 double get_average(const std::vector<double>& vec)
{

typedef std::vector<double>::size_type sz;             // define a type that contain the size of the vector

   sz size=vec.size();
  
  if (size==0) {
   std::cout<< "There is no number at all"<<std::endl;       // if size is zero war the user
   }

  double sum=0;


   for(auto i: vec){
         sum+=i;
}

 return sum/size;          // return the calculated average
}

};

#endif

