
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int m,i=0, reshenie[20];
	int resh=0, chislo=1;
	printf("Napishi chislo m?\n");
	scanf_s("%d", &m);
	int m1 = m;
	
	while(chislo<20){
		chislo = (chislo << 1) + 1;
		if (chislo < m1) {
			printf("\n%d", (chislo));
		}
		
	} 
	return 0;
}

