#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
	vector<int> ans;
	for(auto value : array)
			ans.push_back(value * value);
	
	sort(ans.begin(), ans.end());
  return ans;
}
