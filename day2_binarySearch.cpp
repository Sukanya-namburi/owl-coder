//binarySearch in iterative way
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int target){
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main() {
    int arr[]={12,15,23,56,78};
    int target=23;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,0,n-1,target);
}

//binary search in recursion
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int target){
    int m=(start+end)/2;
    if(start>end){
        return m;
    }
    else if(arr[m]>target){
        return binarySearch(arr,0,m-1,target);
    }
    else{
        return binarySearch(arr,m+1,end,target);
    }
    return -1;
}

int main() {
    int arr[]={12,25,67,89,98};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=12;
    cout<<binarySearch(arr,0,n-1,target);
}

//here instead of writing mid=(start+end)/2 better to use mid=start+(end-start)/2 to avoid bugs in the code
//for faster execution use mid=(start+end)>>1 or mid=(unsigned int)start+(unsigned int)end>>1


