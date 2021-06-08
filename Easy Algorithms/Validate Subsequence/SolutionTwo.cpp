using namespace std;

// O(n) time | O(1) space - where n is the length of the array
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
	int arrIdx = 0;
	int seqIdx = 0;
	
	while(arrIdx < array.size() && seqIdx < sequence.size()) {
		if(array[arrIdx] == sequence[seqIdx]) {
			 seqIdx++;
		}
		
		arrIdx++;
	}
	
	return seqIdx == sequence.size();
}
