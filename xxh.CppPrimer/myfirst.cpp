#include <iostream>
#include "primelist.h"

using namespace std;

bool isTruncatable(int num,class PrimeList *pl);
//problem 37
int main()
{
	const int size=1000;
	PrimeList *pl=new PrimeList();
	int num=2;
	int sum=0;
	int truncateNumberCount=0;
	while(truncateNumberCount!=11){
		if(pl->isPrimeNum(num)){
			pl->addPrimeNum(num);
			if(num>10 &&isTruncatable(num,pl)){
				sum+=num;
				truncateNumberCount++;
			}
		}
		num++;
	}
	
	cout.precision(15);
	cout<<"Result:"<<sum<<endl;
	cout<<endl;
	cin.get();
	cin.get();
	return 0;
}


bool isTruncatable(int num,class PrimeList *pl){
	int temp=num/10;
	while(temp!=0){
		if(!pl->isPrimeNum(temp)){
			return false;
		}
		temp=temp/10;
	}
	temp=num;
	int level=1;
	int result=0;
	while(true){
		result+=temp%10*level;
		level*=10;
		temp=temp/10;
		if(result==num) break;
		if(!pl->isPrimeNum(result)){
			return false;
		}
	}
	return true;
}
