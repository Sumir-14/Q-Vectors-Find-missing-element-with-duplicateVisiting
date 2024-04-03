#include <iostream>
using namespace std;

int findmissing(int *n,int size)
{
  int ans =-1;
  for(int i=0;i<size;i++)
    {
      int index =abs(n[i]);
      if(n[index-1]<0)
        ans=index;
        break;
      {
        n[index-1] *=1;
      }
      
    } for(int i=0;i<size;i++)
    {
      cout<<n[i]<<"  ";
    }
  return   0;
}

int main() {
  int n[]={1,3,5,3,4};
  int size=sizeof(n)/sizeof(int);
  findmissing(n,size);
  return 0;

}