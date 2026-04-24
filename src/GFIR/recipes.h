/* ************************************************************************ 
   FILE:	recipes.h
   COMMENT:	clean up C isms and fix compiler warnings. 
   CONTENT:
   AUTHOR:	M. H. Reilly 
   DATE:	May 17, 2017
   REVISION:
   ************************************************************************ */
#ifndef RECIP_GFIR_HDR
#define RECIP_GFIR_HDR

#ifdef	__cplusplus
extern "C" {
#endif

double *vector(int nl, int nh);
int *ivector(int nl, int nh);
double **matrix(int nrl, int nrh, int ncl, int nch);

void nrerror(const char * error_text);

int ludcmp(double ** a, int n, int * indx, double * d);

void lubksb(double ** a, int n, int * indx, double * b); 

void free_vector(double * v, int nl, int nh); 
void free_ivector(int * v, int nl, int nh);
void free_matrix(double ** m, int nrl, int nrh, int ncl, int nch);

#ifdef	__cplusplus
}
#endif

#endif
