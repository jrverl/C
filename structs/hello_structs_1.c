#include <stdio.h>
#include <stdlib.h>

struct complex
{
	int re;
	int im;
};

#define complexi struc complex
complexi addcomplex(complexi, complexi)
int main(void){
	complexi z;
	z.re = 1;
	z.im = 2;

	complexi w;
	w.re = 1;
	w.im = 2;

	complexi x;
	x.re = 1;
	x.im = 2;





	printf("z=%i+%i",z.re,z.im);
	printf("w=%i+%i",w.re,w.im);
	printf("x=%i+%i",x.re,x.im);

	return EXIT_SUCCESS;
}

complexi addcomplex(complexi z1, complexi z2){
	complexi result;
	result.re = z1.re +z2.re;
	result.im = z1.im + z2.im;
	return result;
}
