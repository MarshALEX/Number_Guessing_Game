/*****************************
 * **Author:Alexandria Marsh
 * **Date: January 23 2015
 * **Description: Generate a random number and have the user guess
 * ************************/

#include<iostream>
#include<cstdlib> //random num, exit, and srand
#include<time.h> //time()

int main()
  {
	      int num,
		guess,
		x=0 ;	

	
	srand(time(NULL));
	num = rand () % 100;
	std::cout<< "Random number is: "<< num<< std::endl;  



	do
	 {	
	  
	  //enter guess
	  std::cout<<"Enter your guess 1-100: "<<std::endl;
	  std::cin>> guess;
	
	  if(guess == num)
	   {
 	     std::cout<<"Congratulations! Your guess is right!"<< std::endl;
	   }	
	  else if (guess > num)
	   {
	     std::cout<<"Too high. Try again."<<std::endl;
	   }	
	  else if (guess < num)
	   { 
	     std::cout<<"Too low. Try again."<<std::endl;
	   }
	   x++;
	
	 }while(guess != num);
	
	std::cout<<"Number of guesses: "<< x<< std::endl;
	return 0;
  } 
