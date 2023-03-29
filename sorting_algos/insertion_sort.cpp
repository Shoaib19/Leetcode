void insertion_sort(int arr[],int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        
        while( j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
}


// another approach apparently easy one developed by me

void insertion_sort(int arr[], int size){
    for(int i = 1; i < size ; i++)
    {
       int j = i;
        while(j > 0 && arr[j - 1] > arr[j])
        {
            arr[j] = arr[j] + arr[j-1];
            arr[j-1] = arr[j] - arr[j-1];
            arr[j] = arr[j] - arr[j-1];
            j--;
        }
    }
}
