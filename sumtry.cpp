#include <stdio.h>
#include <math.h>

//All c++ programs need a function called main. 
int main(){
	//this should sum all the multiples of 3 and 5 between 0 and 1000.
	int q = 0;
	int sumy = 1;
	for (int n=0; n<=1000; ++n){
		//This makes the loop of each integer. then we will test if they are divisible
		if (n/5 == trunc(n/5) || n/3 == trunc(n/3)){
			sumy = sumy + n;
		}
	}
	printf("the sum of all numbers divisible by 3 and 5 from 0 to 1000 is %d \n",sumy);

	return sumy;	
}


