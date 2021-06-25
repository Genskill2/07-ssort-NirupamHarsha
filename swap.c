void swap_max(int arr[], int l, int n){
  int pos = n;
    for(int i=n+1; i<l; i++){
        if(arr[i]>arr[pos]){
            pos = i;
         }
     }
     int t = arr[n];
     arr[n] = arr[pos];
     arr[pos] = t;
  }

void ssort(int arr[], int l){
  for(int i=0; i<l; i++){
      swap_max(arr,l,i);
    }
}
