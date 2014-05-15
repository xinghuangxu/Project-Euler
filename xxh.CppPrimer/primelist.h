//file primelist.h
#include <stdlib.h>
#include <iostream>

using namespace std;


class PrimeList
{
   public:
      PrimeList::PrimeList(); // constructor
      void addPrimeNum(int num);
	  bool isPrimeNum(int num);
   private:
      int * primeNums;    //dynamic allocation
      int capacity;
      int size;
};