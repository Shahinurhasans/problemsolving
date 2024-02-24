/*Bruteforce Approach:
01.Sort the array
02.(N-1)th value is the largest element & 0th element is the smallest element
       TC: O(N log N)
       SC: O(1) 
       */
#include <bits/stdc++.h>
using namespace std;
int largestt(int a[], int n);
int recursive(int a[], int n);
int main() {
    int array[] = {2, 4, 3, 1, 8,8,8,8, 6, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int large = largestt(array, size); 
    int largee = recursive(array, size); 

    cout << "The largest is: " << large<<endl;
    cout << "The largest is: " << largee;
    return 0;
}
int largestt(int a[], int n) {
    sort(a, a + n);
    return a[n - 1];
}


/*Recursive approach:
01.let A[0]=largest element
02.check with each element of the array.
    TC: O(N
    SC: O(1)
    */
int recursive(int a[], int n)
{
  int  large=a[0];
   for(int i=0;i<n;i++)
   {
    if(a[i]>a[0])
    {
        large=a[i];
    }
   }
   return large;
}