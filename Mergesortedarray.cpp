void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int *left = new int[m];
    int *right = new int[n];

    // Copy values from nums1 and nums2
    for (int i = 0; i < m; i++) {
        left[i] = nums1[i];
    }

    for (int i = 0; i < n; i++) {
        right[i] = nums2[i];
    }

    // Merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = 0;

    while (leftIndex < m && rightIndex < n) {
        if (left[leftIndex] <= right[rightIndex]) {
            nums1[mainIndex++] = left[leftIndex++];
        } else {
            nums1[mainIndex++] = right[rightIndex++];
        }
    }

    // Copy remaining elements from left array
    while (leftIndex < m) {
        nums1[mainIndex++] = left[leftIndex++];
    }

    // Copy remaining elements from right array
    while (rightIndex < n) {
        nums1[mainIndex++] = right[rightIndex++];
    }

    delete[] left;
    delete[] right;
}
