void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    for (int i = m + n - 1; i > -1; i--) {
        if (m == 0) {
            nums1[i] = nums2[n-1];
            n--;
            continue;
        } else if (n == 0) {
            break;
        }
        if (nums2[n-1] >= nums1[m-1]) {
            nums1[i] = nums2[n-1];
            n--;
        } else {
            nums1[i] = nums1[m-1];
            m--;
        }
    }

}