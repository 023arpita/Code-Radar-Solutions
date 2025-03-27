#include <stdio.h>
#include <limits.h> // For INT_MAX

// Function to find the k-th smallest element
int kthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {  
        int minIndex = -1;
        int minValue = INT_MAX;

        // Find the smallest element in the array that hasn't been selected yet
        for (int j = 0; j < n; j++) {
            if (arr[j] < minValue) {
                minValue = arr[j];
                minIndex = j;
            }
        }
        
        // Mark this element as used by setting it to a very large number
        arr[minIndex] = INT_MAX;
        
        // If this is the k-th smallest element, return it
        if (i == k - 1)
            return minValue;
    }
    return -1; // Should never happen if input is valid
}

int main() {
    int n, k;
    scanf("%d", &n);
    
    int arr[n];  

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);  

    if (k > 0 && k <= n) {
        int result = kthSmallest(arr, n, k);
        printf("%d\n", result);
    } else {
        printf("Invalid k value\n");
    }
    
    return 0;
}
