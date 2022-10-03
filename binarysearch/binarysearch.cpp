#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0 ;
    int end = size - 1;

    int mid = start + (end -start)/2;;

    while(start<= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
        mid = start + (end - start)/ 2;
    }
    return -1;
}




int main()
{
     int even[8] = {2,4,6,8,10,12,14,16};
     int odd[7] = {1,3,5,7,9,11,13};

     int evenindex = binarysearch(even , 8, 14);

     cout<<"index of 14 in even is " << evenindex <<endl;

     int oddindex =  binarysearch(odd, 7,1);

     cout<<"index of 1 in odd is "<<oddindex<<endl;

     return 0;
}