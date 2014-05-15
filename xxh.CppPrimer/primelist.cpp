// file song.cpp
#include "primelist.h"

//constructor
PrimeList::PrimeList() // constructor
{
	size=0;
	capacity=5000;
	primeNums=(int *) malloc(capacity*sizeof(int));
}

void PrimeList :: addPrimeNum(int num)
{
	if(size==capacity){
		capacity*=2;
		primeNums=(int *) realloc(primeNums,capacity*sizeof(int));
	}
	primeNums[size]=num;
	size++;
}

bool PrimeList :: isPrimeNum (int num)
{
	 if(num==1) return false;
	 double num_sqrt=sqrt((double)num);
	 for(int i=0;i<size&&this->primeNums[i]<=num_sqrt;i++){
		 if(num%primeNums[i]==0)
			 return false;
	 }
     return true;
}
