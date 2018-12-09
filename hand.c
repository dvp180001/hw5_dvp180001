#include <stdio.h>
#include <gsl/gsl_rng.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char *argv[])
{
 const gsl_rng_type * t;
  gsl_rng * r;

  
   int d, n;
  int m;
float counter;
   gsl_rng_env_setup();

  //t = gsl_rng_default;
  //r = gsl_rng_alloc (t);

//	      for (d = 0; d < n; d++) 
int opt;	          

//while ((opt = getopt( argc,argv, "p")) !=-1)
//{
//switch (opt)
//
//{
//case 'p':

   t = gsl_rng_default;
     r = gsl_rng_alloc (t);
n =atoi(argv[2]);
printf("created %d process\n", n);
                       for(d=0; d < n; d++)
		       {
		       
		        int u = gsl_rng_get(r);
			srand(time(NULL));
			int h = abs(u%100);
			int i =atoi(argv[1]);
			      
//		         printf ("numbe of argumen=%d\nand random num=%d\n", i, h);
			 

			  
			if (h < i)
			{ counter++;
//			printf("sucess\n");
		        }
			else;
//			printf("failuer\n");
                       }
				    gsl_rng_free (r);
			    //break;
//			    for (m=0; m < atoi(argv[1]); m++)
			    {
			    float sucess = (scount/n)*100;
			    float failure = 100 - sucess;
			    printf("percentage of sucess= %.2f\n", sucess);
			    printf("failure= %.2f\n", failure);
			    }
  //   printf("error\n");
    // break;
                            //execvp ("./dealer", NULL);
			      return 0;
				      }
//				      }
//				      }
