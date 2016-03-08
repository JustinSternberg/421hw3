cc=gcc
ODIR=obj
hw3: hw3.c
  gcc -std=c99 -Wall -O2 -pthread -o hw3 hw3.c
