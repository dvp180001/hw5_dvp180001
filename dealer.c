#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
pid_t  pid;
int i;
int t, j;
int opt;
char *var;
int ret, status;
char *argg[] = {"./hand", argv[2], argv[3], NULL};

while ((opt = getopt(argc, argv, "-:p:v:")) != -1)
{
switch (opt)
{ //if (fork ==0)

case 'p': //perecentage

       //extern char **environ;
// printf( "PID-%d\n", getpid());
     //if(fork() == 0)
    //char *argg[] = {"./hand", argv[1], argv[2], NULL}; 
  
         execv("./hand", argg);
       
//var = optarg;
//i = atoi(var);

//printf("p=%s\n", var);
       break;

case 'v': //eierbose
       var = optarg;
       j = atoi(var);
       for(t=0; t<j; t++)
       {
           if(fork() == 0)
	       {
	            printf ("PID-%d returned\n ", getpid());
		         exit(0);
			      }
			           }
				        for(t=0;t<j;t++)
					     wait(NULL);

					     
printf("created %s process\n", optarg);

   //if (fork() == 0)
    //t= atoi(argv[2]);
  //   q
  //   for (i = 0; i < t; i++)
  //

//{
     // q
     // if(fork() == 0)
   // printf ("PID-%d returned\n ", getpid());
    //}
    //for(i=0; i < atoi(argv[1]); i++)
      //wait(NULL);
      //execv("./hand", &argv[1]);
        break;
case 1:
    var = optarg;
    int num = atoi(var);
    for(t=0; t<num;t++)
    {
    if(fork() == 0)
    {
     printf ("PID-%d returned\n ", getpid());
     exit(0);
     }
     }
     for(t=0;t<num;t++)
     wait(NULL);


//printf("num of trials %s\n", optarg);
break;
	}
	}
	return 0;
		

}

