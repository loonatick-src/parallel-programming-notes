#include <mpi.h>
#include <stdio.h>
#include <string.h>
#include "trapezoid.h"

int main(void) {
	double a, b, h, local_a, local_b;
	int n, local_n, source;
	int my_rank, comm_sz;

	MPI_Init(NULL, NULL);
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
	MPI_Comm_size(MPI_COMM_WORLD, &comm_sz);

	h = (b - a)/n;

	MPI_Finalize();
	return 0;
}
