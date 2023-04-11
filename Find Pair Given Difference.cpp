// Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N.
// Input:
// L = 6, N = 78
// arr[] = {5, 20, 3, 2, 5, 80}
// Output: 1
// Explanation: (2, 80) have difference of 78.

//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n) {
  // code
  sort(arr,arr + size);
  for(int i = 0; i < size - 1; i++) {
      int x = arr[i] + n;
      int s = i + 1;
      int e = size - 1;
      while (s <= e) {
          int mid = s + (e - s)/2;
          if (arr[mid] == x) return true;
          else if (arr[mid] > x) e = mid - 1;
          else s = mid + 1;
      }
  }
  return false;
}
