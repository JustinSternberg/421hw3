// HW3 Justin Sternberg
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
  if(argc!=3){
    printf("Must have 3 arguments\n");
    exit(1);
  }
	FILE *myFile;
  char line[255];
  myFile=fopen(argv[1],"r");
  if(myFile==NULL){
    printf("File was not found\n");
    exit(1);
  }
  // worker processes to simulate
  fgets(line,255,myFile);
  int w=atoi(line);
  printf("%i\n",w);
  //number of joint a to account
  fgets(line,255,myFile);
  int a=atoi(line);
  printf("%i\n",a);
  // number of transactions T
  fgets(line,255,myFile);
  int t=atoi(line);
  printf("%i\n",t);
  
  int accounts[a];
  //next lines contain 'a' number of account balances
  int i=0;
  while(i<a){
    fgets(line,255,myFile);
    accounts[i]=atoi(line);
    printf("Account %i ",i+1);
    printf("has %i balance\n",accounts[i]);
    i++;
  }
	

  return 0;
}
