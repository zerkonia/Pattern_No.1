#include <stdio.h>
#include <stdlib.h>

// this program prints a rectangle using a multi frames of descending values till it reaches 1.
// the user enters the size of the rectangle
//output example when the user enters a value of 5:
/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/

int main(void) {
unsigned int i;
unsigned int j;
unsigned int decrement = 0; 
unsigned int N;
unsigned int size;
unsigned int lowest;
printf("Enter a value\n");
scanf("%d",&N);
if(N > 0){
	size = 2*N-2;
	for(i = 0;i <= size;i++){
	for(j= 0;j <= size;j++){
		if(i <= (size /2)){
			printf("%d",N - decrement);
			printf(" ");
			lowest = N - decrement;
			if(j<= (size/2) && decrement < i){
					decrement ++;
			}
			else if(j > (size/2) && j == (lowest +(N - 2)) || decrement == (size/2)){
					decrement --;	
			}
		}
		else if(i > (size /2)){
			printf("%d",N - decrement);
			printf(" ");
			lowest = N - decrement;
			if(j<= (size/2) && decrement < (size - i)){
					decrement ++;
			}
			else if(j > (size/2) && j == (lowest +(N - 2))){
			    	decrement --;	
			}
		}
	}
	printf("\n");
	decrement = 0;
  }
}
else if(N == 0){
	printf("%d",N);
}
	return 0;
}
