/*
Problem Name: Earliest Finish Time I
Description: You are given two categories of theme park attractions: land rides and water rides. 
Each ride has a start time and a duration. After finishing a ride, you can immediately start another ride 
if its start time has passed, or wait until it starts. Return the earliest possible time at which the tourist 
can finish both rides.
*/

#include <bits/stdc++.h>
using namespace std;

// Logic: Nested loops to check every combination of Land and Water rides.
int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
    int min_finish_time = INT_MAX;
    for (size_t i = 0; i < landStartTime.size(); i++) {
        for (size_t j = 0; j < waterStartTime.size(); j++) {
            min_finish_time = min({
                min_finish_time, 
                max(landStartTime[i] + landDuration[i], waterStartTime[j]) + waterDuration[j], 
                max(waterStartTime[j] + waterDuration[j], landStartTime[i]) + landDuration[i]
            });
        }
    }
    return min_finish_time;
}

int main() {
    vector<int> landStartTime = {1, 3, 5};
    vector<int> landDuration = {2, 2, 1};
    vector<int> waterStartTime = {2, 4};
    vector<int> waterDuration = {3, 1};
    
    cout << "Running Day 1: Earliest Finish Time I Test Case..." << endl;
    int result = earliestFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);
    cout << "Earliest possible finish time: " << result << endl;
    
    return 0;
}
