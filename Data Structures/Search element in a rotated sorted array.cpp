//time complexity : 2logn

int findPivot(int arr[], int n, int k)
{
   int l=0, r =n-1;
  while(l<=r)
  {
    if(arr[l]<= arr[r])
      return l;
    int mid = (l+r)/2;
    int next = mid+1%n;
    int prev = mid-1+n%n;
    if(arr[next]>arr[mid] and arr[prev]>arr[mid])
      return mid;
    else if(arr[mid] < arr[r])
      r = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}
int binary(int arr[],int start, int last, int k)
{
  int l= start, r= last;
  while(l<= r)
  {
    int mid= (l+r)/2;
    if(arr[mid] == k)
      return mid;
    else if(arr[mid] > k)
      r = mid -1;
    else
      l= mid+1;
  }
  return -1;
}
//logn
int searchRotatedSortedArray(int arr[], int n, int k) {
  
  int pivot = findPivot(arr, n, k);

  if( k> arr[n-1])
  {
	return binary(arr,0,pivot-1, k);
  }
  else 
    return binary(arr, pivot, n-1, k);

}


//time Complexity logn
// Optimized

 
  for(int i = 0 ; i<arr.size(); i++)
  {
    ans = min(ans, arr[j] - arr[i]);
  }
  return ans;