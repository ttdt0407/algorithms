class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue() {

    }
    
    void push(int x) {
        if (!s2.size())
        {
            s2.push(x);
        }
        else
        {
            while(!s2.empty())
            {
                int temp = s2.top();
                s1.push(temp);
                s2.pop();
            }
            s2.push(x);
            while(!s1.empty())
            {
                int temp = s1.top();
                s2.push(temp);
                s1.pop();
            }
        }

    }
    
    int pop() {
        if (s2.empty())
            return -1;
        int res = s2.top();
        s2.pop();
        return res;
    }
    
    int peek() {
        if (s2.empty())
            return -1;
        return s2.top();
    }
    
    bool empty() {
        return s2.empty() == 1;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */