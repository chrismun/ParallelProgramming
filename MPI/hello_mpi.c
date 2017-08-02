#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int rank, size;
    //normal initialization
    MPI_Init(&argc, &argv);

    //startup routines to get rank of each thread and number of threads
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    printf("Hello, World.  I am %d of %d\n", rank, size);

    //you must finalize before the end of the program 
    MPI_Finalize();
    return 0;
}
