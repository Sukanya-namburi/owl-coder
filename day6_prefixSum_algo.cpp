//prefix sum algorithm
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prefix[n]={0};//intially prefix array should contains all zeroes
    prefix[0]=arr[0];//element at zeroth index is copied to prefix[0]
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];//formulae to create prefix array of size n
    }
    int q;//no of test cases
    cin>>q;
    while(q--){
        int l,r;//l=start range,r=end range
        cin>>l>>r;
        if(l==0){
            cout<<prefix[r]<<endl;
        }
        else{
            cout<<prefix[r]-prefix[l-1]<<endl;
        }
    }
}
