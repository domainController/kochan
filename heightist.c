#include <stdio.h>
#include <stdlib.h>

	float nba_height_check(float ft)
{
	float m = 0;
	m = ft * 0.3281 ;
	return m;
}	

	float main(float argc[], char **argv[])
	
{	
	float height = 0;
	printf("6ft c'est environ  %f m\n", nba_height_check(6));
	return 0;
}
		
	
