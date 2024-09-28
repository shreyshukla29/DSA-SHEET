#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        if (n <= 0)
        return 0;

    // Sort meetings based on their end times
    vector<pair<int, int>> meetings;
    for (int i = 0; i < n; i++) {
        meetings.push_back({end[i], start[i]});
    }
    sort(meetings.begin(), meetings.end());

    int meeting = 1;
    int prev_end = meetings[0].first; // End time of the first meeting

    // Check for overlapping meetings
    for (int i = 1; i < n; i++) {
        if (meetings[i].second > prev_end) {
            meeting++;
            prev_end = meetings[i].first;
        }
    }
    return meeting;
    }
};