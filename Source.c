#include <stdio.h>
#include <conio.h>

int main()
{
	int X = 5;
	int Y = 8;

	printf("Hasil X < Y  : %d \n", X < Y);
	printf("Hasil X > Y  : %d \n", X > Y);
	printf("Hasil X <= Y : %d \n", X <= Y);
	printf("Hasil X >= Y : %d \n", X >= Y);
	printf("Hasil X == Y : %d \n", X == Y); 
	printf("Hasil X != Y : %d \n", X != Y); 

	printf("Hasil X == X : %d \n", X == X); 
	printf("Hasil X != X : %d \n", X != X); 

	_getch();
	return 0;
}