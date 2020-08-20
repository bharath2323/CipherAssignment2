// 24) Find out the Kth smallest element in an unsorted array
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
   int size,k;
   cout<<"enter no of elements";
   cin>>size;
   int a[size];
   for(int i=0;i<size;i++)
   {
       cin>>a[i];
   }
   cin>>"enter k value";
   cin>>k;
   sort(a,a+size);
  cout<<a[k-1];
   
    return 0;
}