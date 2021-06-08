#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	
	vector<int> answerPair;
	// Sort the array in ascending order
	sort(array.begin(), array.end());
  // Write your code here.
	for(int i = 0; i < array.size(); i++) {
		for(int j = i + 1; j < array.size(); j++) {
			if(array[i] + array[j] == targetSum) {
				answerPair.push_back(array[i]);
				answerPair.push_back(array[j]);
				return answerPair;
			}
			else 
				continue;
		}
	}
  return {};
}