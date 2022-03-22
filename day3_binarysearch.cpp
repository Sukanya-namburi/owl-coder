//program to find first occurence of the target elemet in array containing duplicates
#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(arr[mid]==target){
            ans=mid;
            high=mid-1;
        }
        if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstOccurence(arr,n,target);
}
