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
{ if (fork ==0)

case 'p':  //percentage
  
//if (fork() == 0)
{
         execvp("./hand", argg);
	 exit(127);
}	 
       break;

case 'v': //eierbose
       var = optarg;
       j = atoi(var);
       for(t=0; t<j; t++)
       {
         pid = fork();
           if (waitpid(pid, &status, 0) >0)
	       {
	       if (WIFEXITED(status) && WEXITSTATUS(status))
	        {
		 if (WEXITSTATUS(status) == 127)
		 {
		 }
		 else
		 {
		  if (WEXITSTATUS(status) <= atoi(argv[2]))
		  {
		   
	            printf ("PID-%d returned success ", getpid());
		    }
		    else
		    printf ("PID-%d returened faiuerr", getpid());
}
}
}

	//	         exit(0);
			      }
			      
			           
			        for(t=0;t<j;t++)
					     wait(NULL);

					     
printf("created %s process\n", optarg);
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
break;
	}
	}
	}
	//}
	//return 0;
		

//}

