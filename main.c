#include <stdio.h>

int main(int argc, char** argv) {
	int secretnumber = 8;
	int guess;
	int guesscount = 0;
	int guesslimit = 3;
	int outofguesses = 0;
	while(guess != secretnumber && outofguesses == 0){
if(guesscount< guesslimit){

	printf("enter a number" );
	scanf( "%d", &guess);
	 guesscount++;
} else (outofguesses = 1);
	} 
if (outofguesses == 1){
		printf(" out of guesses");

}else{
		printf(" you win");

}
	return 0;
}
