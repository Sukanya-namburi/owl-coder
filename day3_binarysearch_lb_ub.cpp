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


//lower bound --->first element which is greater than or equal to the target
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
	int lb=(lower_bound(arr,arr+n,target))-arr;
	cout<<lb;
}

//upper bound --->first element which is greater than target
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
	int ub=(upper_bound(arr,arr+n,target))-arr;
	cout<<ub;
}

//if the target element is not present in the array then lower bound and upper bound points to nth index which is the size of the array
