int binary_search(int arr[],int size, int key)
{
    int mid =  size / 2;
    if(arr[mid] == key)
    return mid;
    int low = 0;
    int high = size - 1;
    
    while(arr[mid] != key)
    {
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