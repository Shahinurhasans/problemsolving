 /*Bruteforce:
     o1.sort the array
     02.find the largest;
     03.the before value the largest is the second largest.
     04.for handeling the multiple of maximum check:  for(int i=0;i<n;i++)
{
    if(arr[i]!=largest)
    {
        slarge=arr[i];
    }
}

        TC: O(N log N)
        SC: O(1)

     */

#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    sort(arr,arr+n);
    int slarge=0;
    int largest=arr[n-1];

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest)
        {
            slarge=arr[i];
        }
    }
    cout<<"Second largest is "<<slarge<<endl;
}
int recursive(int a[],int n);
int main()
{
    int arr[]={1,2,4,6,7,7,7,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    recursive(arr,n);
    return 0;
}


int recursive(int a[],int n)
{
  int  large=a[0];
  int slarge=-1;
   for(int i=0;i<n;i++)
   {
    if(a[i]>a[0])
    {
        large=a[i];
    }
   }
   for(int i=0;i<n;i++)
   {
    if(a[i]>slarge && a[i]!=large)
    {
        a[i]=slarge;
    }
   }
   cout<<slarge;
}









