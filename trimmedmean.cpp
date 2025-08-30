#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double trimmedMean(vector<int>& nums, int trimPercent) {
    int n = nums.size();
    sort(nums.begin(), nums.end()); // sort karna zaroori hai
    
    int trimCount = (n * trimPercent) / 100; // kitne values trim karni hai
    int start = trimCount;
    int end = n - trimCount;
    
    double sum = 0;
    int count = 0;
    
    for (int i = start; i < end; i++) {
        sum += nums[i];
        count++;
    }
    
    return sum / count;
}

int main() {
    vector<int> data = {2, 3, 5, 8, 100};
    
    cout << "Normal Mean: ";
    double normalMean = 0;
    for (int x : data) normalMean += x;
    normalMean /= data.size();
    cout << normalMean << endl;
    
    int trimPercent = 20; // 20% trimmed mean
    cout << trimPercent << "% Trimmed Mean: " << trimmedMean(data, trimPercent) << endl;
    
    return 0;
}
