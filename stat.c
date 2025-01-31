#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
void main()
{
char*path,path1[10];
struct stat*nfile;
nfile=(struct stat*)malloc(sizeof(struct stat));
printf("enter the file Name");
scanf("%s",path1);
stat(path1,nfile);
printf("user ID:%d\n",nfile->st_uid);
printf("Block size:%ld\n",nfile->st_blksize);
printf("last accesss time:%ld\n",nfile->st_atime);
printf("Last modification time:%ld\n",nfile->st_mtime);
printf("Production mode:%d\n",nfile->st_mode);
printf("Size of file:%ld\n",nfile->st_size);
printf("Number of links:%ld\n",nfile->st_nlink);
}
