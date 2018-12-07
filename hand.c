#include <stdio.h>
#include <gsl/gsl_rng.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
 const gsl_rng_type * T;
  gsl_rng * r;

  
   int i, n = 20 ;
  

   gsl_rng_env_setup();

  T = gsl_rng_default;
  r = gsl_rng_alloc (T);

	      for (i = 0; i < n; i++) 
	          {

		        int u = gsl_rng_get (r);
			int h = abs((u%100));
			      printf ("%d\n", h);
			if ( h < 70)
			{printf("sucess\n");}
			else
			printf("failuer\n");
                       }
				    gsl_rng_free (r);

				      return 0;
				      }
