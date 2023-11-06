class SeatManager {
public:
    set<int>arr;
    SeatManager(int n) {
        for(int i = 1;i<=n;i++)
            arr.insert(i);
    }
    
    int reserve() {
      int top = *(arr.begin());
      arr.erase(top); 
     return top;
    }
    
    void unreserve(int seatNumber) {
        arr.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */