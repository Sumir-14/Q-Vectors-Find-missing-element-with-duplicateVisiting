#include <iostream>
#include <vector>
using namespace std;

int findmissing(int *n,int size)
{
  for(int i=0;i<size;i++)
    {
      int index =abs(a[i]);
      if(a[index-1]>0)
      {
        a[index-1] *=1;
      }
      
    }

  for(int i=0;i<size;i++)
    {
      cout<<n[i]<<"  ";
    }
}


int main() {
 vector<int> n={1,3,5,3,4};
  int size=n.size();
  int Findmissing(n,size);
  return 0;
  
}