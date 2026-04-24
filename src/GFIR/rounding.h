/* ************************************************************************ 
   FILE:	rounding.h
   COMMENT:	clean up C isms and fix compiler warnings. 
   CONTENT:
   AUTHOR:	M. H. Reilly 
   DATE:	May 17, 2017
   REVISION:
   ************************************************************************ */
#ifndef ROUND_GFIR_HDR
#define ROUND_GFIR_HDR

#ifdef	__cplusplus
extern "C" {
#endif

void round2int(double * a, double * b, int n, int cprec); 

void round2csd(double * a, double * b, int n, int cprec, int csdprec, 
	       int ** bincode, int ** csdcode, int ** csdcoder);

void int2csd(int a, int cprec, int csdprec, int * bincode, int * csdcode, int * csdcoder);
int csd2int(int cprec, int *code);
void printcode(int ** code, int n, int cprec);
void print_cses_code(int **xpx, int **xmx, int **x, int n, int cprec);
void csesh(int **code, int n, int cprec, int **xpx, int **xmx, int **x);

#ifdef	__cplusplus
}
#endif

#endif
