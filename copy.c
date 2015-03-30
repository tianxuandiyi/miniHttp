
#include <stdio.h>

static char copybuf[16384];

extern int TIMEOUT;

int copy(FILE *read_f, FILE *write_f)
{
  int n;
  int wrote;
  alarm(TIMEOUT);
  while (n = fread(copybuf,1,sizeof(copybuf),read_f)) {
    alarm(TIMEOUT);
    wrote = fwrite(copybuf,n,1,write_f);
    alarm(TIMEOUT);
    if (wrote < 1)
    	return -1;
  }
  alarm(0);
  return 0;
}
