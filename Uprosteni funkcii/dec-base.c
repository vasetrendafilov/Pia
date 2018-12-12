#include <stdio.h>
//Pretvoranje od dekaden vo bilo koja osnova <= 9, rekurzivno
int BaseN(int dec, int base)
{
	static int b = 0;
	if(dec == 0) return 0;
	BaseN(dec/base, base);
	b = b * 10 + dec % base;
	return b;
}

int main(void)
{
	printf("%d", BaseN(79, 7));
}
