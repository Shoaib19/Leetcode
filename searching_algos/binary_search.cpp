int binary_search(int arr[],int size, int key)
{
    int low = 0;
    int high = size - 1;
    
    while(low <= high)
    {
      mid = low + (high - low) / 2;
      // start from here
        if(key < arr[mid])
        {
            high = mid;
            mid = low + high / 2;
        }
        else if(key > arr[mid])
        {
            low = mid;
            mid = low + high / 2;
        }
    }
    return (arr[mid] == key) ? mid : -1;
}