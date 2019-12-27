#include "lib.h"

int array_sum(int *p,unsigned int n){
  int res=0;
  for(unsigned int i=0; i<n; i++){
    res=res+p[i];
  }
  return res;
}