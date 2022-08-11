#include <stdio.h>

int main() {
  FILE *fp;
  char buff[4096];

  //Opening a text file for writing. If it does not exist, then a new file is created. Here the program will start writing content from the beginning of the file.
  fp = fopen("./test.txt", "w");
  /*
  Other possible modes:
    "r" - opens an existing text file for reading purpose.
    "a" - opens a text file for writing in appending mode. If it does not exist, then a new file is created. Here your program will start appending content in the existing file content.
    "r+" - opens a text file for both reading and writing.
    "w+" - opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.
    "a+" - opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.
  */
    
  //writing the string s to the output stream referenced by fp
  fputs("This is testing for fputs...", fp);
  
  //Closing the file
  fclose(fp);

  fp = fopen("./test.txt", "r");
  
  //Reading up to n-1 characters from the input stream referenced by fp.  It copies the read string into the buffer buf, appending a null character to terminate the string. NOTE: If this function encounters a newline character '\n' or the end of the file EOF before they have read the maximum number of characters, then it returns only the characters read up to that point including the new line character.
  fgets(buff, 4096, (FILE*)fp);
  
  printf("%s\n", buff);
  fclose(fp);

  return 0;
}