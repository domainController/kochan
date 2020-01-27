#include <stdio.h>
#include <stdlib.h>

	double nba_height_check(double ft, double inch);


	double main(double argc[], char **argv[])
	
{	
	printf("6ft2 c'est  %f cm\n", nba_height_check(6,2));

	return 0;
}

	double nba_height_check(double ft, double inch)
	
{
	double cm = 0, cm1 = 0, cm2 = 0 ;
	double ft, inch;
	cm1 = 30.48 * ft;
	cm2 = 2.54 * inch;
	cm1 + cm2 == cm;
	return cm;
}	
