
// Q : 7
// Maximum and minimum of an array using
#include<iostream>
using namespace std;

// Pair struct is used to return
// two values from getMinMax()
struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;	
	int i;
	
	// If there is only one element
	// then return it as min and max both
	
	if(n==1){
	    minmax.max=arr[0];
	    minmax.min=arr[0];
	}
	if(arr[0]>arr[1]){
	    minmax.max=arr[0];
	    minmax.min=arr[1];
	}
	else{
	    minmax.max=arr[1];
	    minmax.min=arr[0];
	}
	for(int i=2;i<n;i++){
	    if(arr[i]>minmax.max){
	        minmax.max=arr[i];
	    }
	    else if(arr[i]<minmax.min){
	        minmax.min=arr[i];
	    }
	}
	return minmax;
	
	
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
	
	struct Pair minmax = getMinMax(arr,n);
	
	cout << "Minimum element is "
		<< minmax.min << endl;
	cout << "Maximum element is "
		<< minmax.max;
		
	return 0;
}






