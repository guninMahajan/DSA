#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target,int low,int high)
{
int mid = (low+high)/2;
if(low>=high) return -1;
if(arr[mid]==target){
    return  mid;
}
else if(arr[mid]>target){
     binarySearch(arr,n,target,low,mid-1); 
}
else  binarySearch(arr,n,target,mid+1,high);
}

int main(){
    int n;
    cout<<"enter size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter element : "<<i+1<<endl;
        cin>>arr[i];
    }
    int target;
    cout<<"enter the element you want to search"<<endl;
    cin>>target; 
    if(binarySearch(arr,n,target,0,n-1)==-1) cout<<"element not found"<<endl;
    else cout<<"element found at index : "<<binarySearch(arr,n,target,0,n-1);
 
    return 0;
}