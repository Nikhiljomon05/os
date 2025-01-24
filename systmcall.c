#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void main()
{
   pid_t cpid=fork();
   
   if(cpid==0)
   {
     printf("I am the child and child created successfully\n");
     printf("child id=%d\n ",getpid());
     printf("Parent id=%d\n",getppid());
   }
   if(cpid>0)
   {
     printf("I am the parent and child created successfully\n");
     printf("child id=%d\n",cpid);
     printf("Parent id=%d\n",getpid());
     wait(NULL);
   }
   if(cpid<0)
   {
      printf("child creation is unsuccessfull\n");
 
   }
   exit(0);
 }
