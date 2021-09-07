// SeptemberDaily Challenge

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans= keysPressed[0];
        int time= releaseTimes[0];
        for(int i=1; i<keysPressed.size(); i++)
        {
            int duration = releaseTimes[i]- releaseTimes[i-1];
            if(duration==time)
            {
                ans= max(ans, keysPressed[i]);
            }
            if(duration>time)
            {
                ans=keysPressed[i];
                time = duration;
            }
        }
        return ans;
    }
};
