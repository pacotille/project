#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <assert.h> 
#include "mat-band.h"
#include "mat-band-test.h"


void test_mat_band()
{
  {
    mat_band_t *mat1 = create_mat_band(10, 10);
    fill_random_mat_band(mat1);
    mat_band_t *mat2 = clone_mat_band(mat1);
    assert(cmp_mat_band(mat1, mat2));
    free_mat_band(mat1);
    free_mat_band(mat2);
  }
}

