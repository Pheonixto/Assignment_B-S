#include <iostream>
using namespace std;


// SWAP FUNCTION TO BE CALLED IN MAIN !!!!!

void swap(int *A, int *B)
{
   
   int C;
     C = *A;
     *A = *B;
     *B = C;
}

// BUBBLE SORT FUNCTION TO BE CALLED IN MAIN!!!!

void bubbleSort(int arr[] , int n){
	
	int i, j; 
	
	for(i=0; i<n-1; i++){
		
		for(j=0; j<n-i-1; j++){
			if (arr[j] > arr[j+1] )
			
			swap( &arr[j] , &arr[j+1]);
		}
	}
	
}

// PRINT FUNCTION TO DISPLAY THE OUTPUT

void PrintArray(int arr[], int size)
{
	int i; 
	for(i=0; i<size; i++)
	{
	
	   cout<<arr[i] << " " ;
	   
    }
	   cout<<endl;
}

// MAIN FUNCTION TO RUN THE CODE

int main() {
	

   
    int arr[50], n;
   
   // TO ACCEPT INPUT FROM USERS 
    cout<<"Please enter the size of the array : " <<endl;
    cin>> n;
	
	cout<<"Please enter array element : " << endl;
	
	for(int i=0; i < n; i++)
	{
	   cin>>arr[i];
	 	
	}	
    	// DISPLAY UNSORTED ARRAY ELEMENT
    	cout<< "Unsorted array : " ;
     	PrintArray(arr , n);
		
    	bubbleSort(arr , n );
    	
    	//DISPLAY SORTED ARRAY ELEMENT
    	cout<<"Sorted array : " ;
    	PrintArray(arr , n);
    	
    return 0;
}
