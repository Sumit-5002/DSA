/*
Problem Name: Earliest Finish Time II
Description: You are given two categories of theme park attractions: land rides and water rides. 
Each ride has a start time and a duration. After finishing a ride, you can immediately start another ride 
if its start time has passed, or wait until it starts. Return the earliest possible time at which the tourist 
can finish both rides. (Constraints require an optimized O(N log N) approach).
*/

#include <bits/stdc++.h>
using namespace std;

struct Ride {
    int startTime;
    int duration;
};

// Helper function to calculate the minimum finish time given an order (Rides 1 then Rides 2)
int solveOrder(vector<Ride> rides1, vector<Ride> rides2) {
    int n = rides1.size();
    int m = rides2.size();
    if (n == 0 || m == 0) return INT_MAX;
    
    // Sort rides2 by startTime
    sort(rides2.begin(), rides2.end(), [](const Ride& a, const Ride& b) {
        return a.startTime < b.startTime;
    });
    
    // Prefix minimum of duration in rides2
    vector<int> prefixMinDur(m);
    prefixMinDur[0] = rides2[0].duration;
    for (int i = 1; i < m; ++i) {
        prefixMinDur[i] = min(prefixMinDur[i - 1], rides2[i].duration);
    }
    
    // Suffix minimum of (startTime + duration) in rides2
    vector<int> suffixMinFinish(m);
    suffixMinFinish[m - 1] = rides2[m - 1].startTime + rides2[m - 1].duration;
    for (int i = m - 2; i >= 0; --i) {
        suffixMinFinish[i] = min(suffixMinFinish[i + 1], rides2[i].startTime + rides2[i].duration);
    }
    
    int minTotalFinish = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int F1 = rides1[i].startTime + rides1[i].duration;
        
        // Binary search to find the first ride in rides2 with startTime > F1
        int low = 0, high = m - 1;
        int idx = m; // default if all are <= F1
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (rides2[mid].startTime > F1) {
                idx = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        // Case A: Second ride starts <= F1 (take minimum duration of those rides)
        if (idx > 0) {
            minTotalFinish = min(minTotalFinish, F1 + prefixMinDur[idx - 1]);
        }
        // Case B: Second ride starts > F1 (take minimum start + duration of those rides)
        if (idx < m) {
            minTotalFinish = min(minTotalFinish, suffixMinFinish[idx]);
        }
    }
    return minTotalFinish;
}

int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
    vector<Ride> land, water;
    for (size_t i = 0; i < landStartTime.size(); ++i) {
        land.push_back({landStartTime[i], landDuration[i]});
    }
    for (size_t i = 0; i < waterStartTime.size(); ++i) {
        water.push_back({waterStartTime[i], waterDuration[i]});
    }
    return min(solveOrder(land, water), solveOrder(water, land));
}

int main() {
    vector<int> landStartTime = {1, 3, 5};
    vector<int> landDuration = {2, 2, 1};
    vector<int> waterStartTime = {2, 4};
    vector<int> waterDuration = {3, 1};
    
    cout << "Running Day 3: Earliest Finish Time II Test Case..." << endl;
    int result = earliestFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);
    cout << "Earliest possible finish time: " << result << endl;
    
    return 0;
}
