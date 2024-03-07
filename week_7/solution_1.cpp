#include <iostream>
#include <algorithm>
using namespace std;
int binarySearchOnDecreaseUsingLoop(int arr[], int start, int end, int target)
{

    while (end > start)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target > arr[mid])
        {
            end = mid;
        }
        if (arr[mid] > target)
        {
            start = mid;
        }
    }

    return -1;
}
int binarySearchOnDecreaseUsingRecursion(int arr[], int start, int end, int target){
    if(start==end){
        if(arr[start] !=target) {
            
            return -1;
        }else return start;
    }else{
        int mid = (end + start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }else if (target > arr[mid])
        {
            return binarySearchOnDecreaseUsingRecursion(arr, start,mid,target);
        }else 
        {
            return binarySearchOnDecreaseUsingRecursion(arr, mid,start,target);

        }
    }

}
int main()
{
    int arr[10] = {222, 111, 100, 70, 22, 5, 3, 2, 2, 1};

    for (auto it : arr)
    {
        cout << binarySearchOnDecreaseUsingLoop(arr, 0, 10, it);
        cout << binarySearchOnDecreaseUsingRecursion(arr, 0, 10, it)<<" ";

        /* code */
    }
}