#include <stdio.h>
#include <dirent.h>
//added for exit()
#include <stdlib.h>
//added for stat()
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *dir;
  struct dirent *ent;
  //references size in bytes
  struct stat buf;

  // Open directory //Initialize the dir. 
  if(argc < 2) {
      dir = opendir(".");

    }else{
      dir = opendir(argv[1]);
    }

  //Checking if directory exist -  if not return error
  if (dir == NULL) {
    printf("Error: Non-Existent Directory\n");
    exit(1);
    }else 
  // Repeatably read and print entries
    while((ent =readdir(dir)) != NULL) {
      stat(ent->d_name, &buf);
      printf("file size is %lld: %s\n", buf.st_size, ent->d_name);
    
  }
  // Close directory
    closedir(dir);
  return 0;
}