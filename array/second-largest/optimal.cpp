#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={2,4,6,7,1,7};
    int  large=arr[0];
    int slarge=-1;
    for (int i = 0; i < 7; i++) 
    {
        if (arr[i] > large) 
        {
            slarge = large;
            large = arr[i];
        }
 
        else if (arr[i] > slarge && arr[i] != large) 
        {
            slarge = arr[i];
        }
    }
 cout<<slarge;
}