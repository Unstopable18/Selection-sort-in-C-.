#include <iostream>
using namespace std;
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selection(int arr[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
		min_idx = j;
		swap(&arr[min_idx], &arr[i]);
	}
}
void print(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int n,i,arr[50];
    cout<<"**************************************\n";
	cout<<"       *****Selection Sort*****\n";
    cout<<"**************************************\n";
    cout<<"Enter Total No. of Elements ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Elements:\n";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
	selection(arr, n);
	cout<<"**************************************\n";
    cout<<"Sorted Array is:-\n";
	print(arr, n);
    cout<<"*******************************************\n";
	return 0;
}

