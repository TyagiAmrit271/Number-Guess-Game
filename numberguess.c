#include<stdio.h>
#include<stdlib.h>//using for library function
#include<time.h>//using for accessing time function
int main()
{
	int num,guess,nguesses=1;
	srand(time(0));
	num = rand()%100 + 1;//so that the value won't exceed over 100
	//printf("The number is %d", num);
	//program to generate a random number
	//code below is the number guessing game part 
	do {				//using do while loop as it is an exit control loop which is more favorable than while and for in gaming related codes
		printf("Guess a number between 1 to 100\n");
		scanf("%d",&guess);
		if(guess>100 || guess<0){
			printf("Please Enter a  number between 1 and 100\n");
		}	
		else if(guess>num){
			printf("Lower Number Please\n");
		}
		else if(guess<num){
			printf("Higher Number Please\n");
		}
		else
			printf("You Guessed in %d attempts", nguesses);
		
	nguesses++;
	}while(guess!=num);
	
	return 0;
}
