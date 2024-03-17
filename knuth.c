#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdint.h>
#include <math.h>

unsigned long long knuth(unsigned long long, unsigned long long, unsigned long long);
int main(int argc, char **argv)
{
	printf(" knuth = %llu \n", knuth(2,2,4));
	return 0;
}
unsigned long long knuth(unsigned long long a, unsigned long long n, unsigned long long b)
{
	if(n==1)
		return pow(a,b);
	else if((n>=1)&&(b==0))
		return 1;
	else
		return knuth(a, n-1, knuth(a,n,b-1));
}