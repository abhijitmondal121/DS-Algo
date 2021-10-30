// Q 10:

// A C++ program to put all negative
// numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int j = 0;
	for(int i=0;i<n;i++){
	    if(arr[i]<0){
	        if(i!=j){
	            swap(arr[i],arr[j]);
	            j++;
	        }
	    }
	}

}

// A utility function to print an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout<< arr[i];
}

// Driver code
int main()
{
    cout<<"Enter the range : "<<endl;
    int n;
    cin>>n;
 
      int arr[n];

    cout<<"Enter the value : "<<endl;
    for (int i=0;i<n;i++){
         cin>>arr[i];
    }
	
	rearrange(arr, n);
	printArray(arr, n);
	return 0;
}







