#ifndef IO_HTOYIO_C_H_
#define IO_HTOYIO_C_H_

int readToy_LP_c(const char* filename, int* m_p, int* n_p, int* maxmin,
                 double* offset, double** A, double** b, double** c,
                 double** lb, double** ub);

#endif
