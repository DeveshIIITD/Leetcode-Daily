int search(int* nums, int numsSize, int target) {
    int end = numsSize-1;
    int st = 0;

    while (st <= end){
        int mid = st + (end-st)/2;
        if (nums[mid] == target){
            return mid;
        }

        if (nums[st] <= nums[mid]){   // left part is sorted
            if (nums[st] <= target && target <= nums[mid]){ // if exists in left half
                end = mid-1;
            }
            else{
                st = mid+1; // if not then in right unsorted part
            }
        }

        else{  // or right part is sorted
            if( nums[mid] <= target && target <= nums[end]){ // if exists in right half
                st = mid+1;
            }
            else{
                end = mid-1;  // if not then in left unsorted part
            }
        }
    }
    return -1;
}
