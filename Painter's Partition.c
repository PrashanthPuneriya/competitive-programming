#include<stdio.h>

int ansPainters = 0;

int paintersRequired(int arr[], int n, int maxTime) { // isPossible()
    int painters = 1; // Atleast one painter is required
    int timeTillNow = 0;
    for(int i=0; i<n; ++i) {
        timeTillNow += arr[i];
        if(timeTillNow > maxTime) {
            painters++;
            timeTillNow = arr[i];
        }
    }
    return painters; // No.of painters req to paint in maxTime
}

int partition(int arr[], int n, int paintersPresent) {
    int low = 40; // lowest possible time to paint all boards -> getMin()
    int high = 100; // highest possible time to paint all boards -> getSum()
    int ans = 0;

    while(low < high) {
        int mid = low + (high - low)/2;
        // Is it possible to paint all the boards in "mid" units of time and less no.of painters?
        if((ansPainters = paintersRequired(arr, n, mid)) <= paintersPresent) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 80}; // arr[i] = Time to paint each board
    int minTime = partition(arr, 4, 3);
    printf("%d is the minimum time required to paint all the by %d painters\n", minTime, ansPainters);
}