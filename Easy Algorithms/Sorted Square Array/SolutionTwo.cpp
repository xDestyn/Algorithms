#include <vector>
#include <algorithm>
using namespace std;

// O(nlogn) time | O(n) space - where n is the length of the input array
vector<int> sortedSquaredArray(vector<int> array) {
	vector<int> sortedSquares(array.size(), 0);
	
	for(int idx = 0; idx < array.size(); idx++) {
		int value = array[idx];
		sortedSquares[idx] = value * value;
	}
	
	sort(sortedSquares.begin(), sortedSquares.end());
	return sortedSquares;
}
