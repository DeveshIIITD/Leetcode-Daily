int func(vector<int>arr){  O(N)
  int l = 0, r = 0, maxlen = 0;
  unordered_map<int,int> mpp;
  while(r < arr.size()){
    mpp[arr[r]] += 1;
    if(mpp.size() > 2){
      mpp[arr[l]] --;
      if(mpp[arr[l]] == 0){
        mpp.erase(arr[l]);
      }
      l++;
    }
    if(mpp.size() <= 2){
      maxlen = max(maxlen,j-i+1);
    }
    r++;
  }
  return maxlen;
}
