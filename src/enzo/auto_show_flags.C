#include <stdio.h>
void auto_show_flags(FILE *fp) {
   fprintf (fp,"\n");
   fprintf (fp,"CPP = /usr/bin/cpp\n");
   fprintf (fp,"CC  = /usr/bin/mpicc\n");
   fprintf (fp,"CXX = /usr/bin/mpic++\n");
   fprintf (fp,"FC  = /usr/bin/gfortran\n");
   fprintf (fp,"F90 = /usr/bin/gfortran\n");
   fprintf (fp,"LD  = /usr/bin/mpic++\n");
   fprintf (fp,"\n");
   fprintf (fp,"DEFINES = -DLINUX -DH5_USE_16_API -DTIMING -DMEM_TRACE   -D__max_subgrids=100000 -D__max_baryons=30 -D__max_cpu_per_node=8 -D__memory_pool_size=100000 -DINITS64 -DLARGE_INTS -DCONFIG_PINT_8 -DIO_32    -DUSE_MPI   -DCONFIG_PFLOAT_8 -DCONFIG_BFLOAT_8  -DUSE_HDF5_GROUPS      -DNEW_GRID_IO -DFAST_SIB      -DENZO_PERFORMANCE  -DUSE_GRACKLE  -DSAB\n");
   fprintf (fp,"\n");
   fprintf (fp,"INCLUDES = -I/home/azton/simulations/depend/hdf5/include       -I/home/azton/simulations/depend/grackle_noomp/include    -I.\n");
   fprintf (fp,"\n");
   fprintf (fp,"CPPFLAGS = -P -traditional \n");
   fprintf (fp,"CFLAGS   = -fdefault-real-8 -m64 -fdefault-double-8 -O2\n");
   fprintf (fp,"CXXFLAGS = -m64 -O2\n");
   fprintf (fp,"FFLAGS   = -fno-second-underscore -ffixed-line-length-132 -m64 -fdefault-real-8 -fdefault-double-8 -O2\n");
   fprintf (fp,"F90FLAGS = -fno-second-underscore -O2\n");
   fprintf (fp,"LDFLAGS  =  -O2\n");
   fprintf (fp,"\n");
   fprintf (fp,"LIBS     = -L/home/azton/simulations/depend/hdf5/lib -lhdf5  -lstdc++ -lgfortran -lpthread         -L/home/azton/simulations/depend/grackle_noomp/lib -lgrackle\n");
   fprintf (fp,"\n");
}
