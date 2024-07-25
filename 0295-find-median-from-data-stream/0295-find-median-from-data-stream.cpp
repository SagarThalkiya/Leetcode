#include <queue>
#include <vector>

class MedianFinder {
public:
    std::priority_queue<int> maxHeap; // Max-heap for the smaller half
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap; // Min-heap for the larger half

    MedianFinder() {
        // Constructor
    }
    
    void addNum(int num) {
        // Add to max-heap
        maxHeap.push(num);
        
        // Balance the heaps: move the largest from max-heap to min-heap
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        
        // Maintain size property
        if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        } else {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
    }
};


/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */