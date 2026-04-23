class MyCalendarTwo {
public:
    MyCalendarTwo() {
    }
    
    bool book(int startTime, int endTime) {
        d[startTime]++;
        d[endTime]--;
        int sum = 0;
        for (map<int, int>::iterator it = d.begin(); it != d.end(); it++)
        {
            sum += it->second;
            if (sum >= 3)
            {
                d[startTime]--;
                d[endTime]++;
                return false;
            }
        }

        return true;
    }
private:
    map<int, int> d;
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */