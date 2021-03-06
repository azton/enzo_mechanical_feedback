#include <stdio.h>
void auto_show_compile_options(void) {
   FILE *opf;
   opf = fopen("Enzo_Build", "w");
   fprintf(opf, "### Enzo build information:\n");
   fprintf(opf, "### Compiled: Tue Mar 19 13:33:42 2019\n");
   fprintf(opf, "### Machine name: linux-gnu\n");
   fprintf(opf, "### Branch: unknown\n");
   fprintf(opf, "### Changeset: unknown\n");
   fprintf(opf, "###\n");
   fprintf(opf, "### Use this as a compile settings file by renaming\n");
   fprintf(opf, "### it Make.settings.<keyword> and moving it to\n");
   fprintf(opf, "### either src/enzo or .enzo in your home directory.\n");
   fprintf(opf, "### Then, type \"make load-config-<keyword>\" to load\n");
   fprintf(opf, "### compiler options.\n");
   fprintf(opf, "###\n");
   fprintf(opf, "### The current compile options are shown below.\n");
   fprintf(opf, "### For more information on the meaning of the\n");
   fprintf(opf, "### options, consult src/enzo/Make.config.settings.\n");
   fprintf(opf, "\n");
   fprintf(opf, "PARAMETER_MAX_SUBGRIDS = 100000\n");
   fprintf(opf, "PARAMETER_MAX_BARYONS = 30\n");
   fprintf(opf, "PARAMETER_MAX_TASKS_PER_NODE = 8\n");
   fprintf(opf, "PARAMETER_MEMORY_POOL_SIZE = 100000\n");
   fprintf(opf, "CONFIG_INTEGERS = 64\n");
   fprintf(opf, "CONFIG_PARTICLE_IDS = 64\n");
   fprintf(opf, "CONFIG_PRECISION = 64\n");
   fprintf(opf, "CONFIG_PARTICLES = 64\n");
   fprintf(opf, "CONFIG_INITS = 64\n");
   fprintf(opf, "CONFIG_IO = 32\n");
   fprintf(opf, "CONFIG_USE_MPI = yes\n");
   fprintf(opf, "CONFIG_OBJECT_MODE = 64\n");
   fprintf(opf, "CONFIG_TASKMAP = no\n");
   fprintf(opf, "CONFIG_PACKED_AMR = yes\n");
   fprintf(opf, "CONFIG_PACKED_MEM = no\n");
   fprintf(opf, "CONFIG_LCAPERF = no\n");
   fprintf(opf, "CONFIG_PAPI = no\n");
   fprintf(opf, "CONFIG_PYTHON = no\n");
   fprintf(opf, "CONFIG_NEW_PROBLEM_TYPES = no\n");
   fprintf(opf, "CONFIG_OOC_BOUNDARY = no\n");
   fprintf(opf, "CONFIG_ACCELERATION_BOUNDARY = yes\n");
   fprintf(opf, "CONFIG_ENZO_PERFORMANCE = yes\n");
   fprintf(opf, "CONFIG_OPT = high\n");
   fprintf(opf, "CONFIG_TESTING = no\n");
   fprintf(opf, "CONFIG_PHOTON = no\n");
   fprintf(opf, "CONFIG_HYPRE = no\n");
   fprintf(opf, "CONFIG_EMISSIVITY = no\n");
   fprintf(opf, "CONFIG_NEW_GRID_IO = yes\n");
   fprintf(opf, "CONFIG_FAST_SIB = yes\n");
   fprintf(opf, "CONFIG_USE_HDF4 = no\n");
   fprintf(opf, "CONFIG_BITWISE_IDENTICALITY = no\n");
   fprintf(opf, "CONFIG_ECUDA = no\n");
   fprintf(opf, "CONFIG_GRAVITY_4S = no\n");
   fprintf(opf, "CONFIG_GRACKLE = yes\n");
   fprintf(opf, "CONFIG_LOG2ALLOC = no\n");
   fclose(opf);
}
