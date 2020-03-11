#include <iostream>
using namespace std;

// FUNCTION TO SWAP ELEMENTS
void swap(int *A, int *B)
{
   
   int C;
     C = *A;
     *A = *B;
     *B = C;
}
// FUNCTION TO DO SELECTION SORT
void SelSort(int arr[] , int n){
	
	int i, j, min_num;
	
	for(i=0; i<n-1; i++){
		min_num = i;
		
		for(j=i+1; j<n; j++){
			if (arr[j] < arr[min_num] )
 			min_num =j;
			
			swap( &arr[min_num] , &arr[i]);
		}
	}
	
}

// FUNCTION TO DISPLAY ELEMENTS IN THE ARRAY
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
    	// DISPLAY UNSORTEd ARRAY ELEMENT
    	cout<< "Unsorted array : " ;
     	PrintArray(arr , n);
		
    	SelSort(arr , n );
    	
    	//DISPLAY SORTED ARRAY ELEMENT
    	cout<<"Sorted array : " ;
    	PrintArray(arr , n);
    	
    	
			return 0;
}
