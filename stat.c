#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
void main()
{
  char *path,path1[10];
  struct stat *nfile;
  nfile=(struct stat*)malloc(sizeof(struct stat));
  printf("Enter the file name:");
  scanf("%s",path1);
  stat(path1,nfile);
  printf("User id:%d\n",nfile->st_uid);
  printf("block size:%ld\n",nfile->st_blksize);
  printf("product mode:%d\n",nfile->st_mode);
  printf("access time:%ld\n",nfile->st_atime);
  printf("Last modified time:%ld\n",nfile->st_mtime);
  printf("size of file:%ld\n",nfile->st_size);
  printf("Number of links:%ld\n",nfile->st_nlink);
}
	

