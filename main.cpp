#include <iostream>
#include "lib.h"

using namespace std;
int main() {
  unsigned int n;
  cin>>n;
  int *p;
  p=new int[n];

  cout<<"Заполните массив размерности "<<n<<'\n';
  for(unsigned int i=0; i<n; i++){
    cin>>p[i];
  }

  for(unsigned int i=0; i<n; i++){
    cout<<p[i]<<" ";
  }

  cout<<'\n'<<array_sum(p,n);

  delete[]p;
  return 0;
}