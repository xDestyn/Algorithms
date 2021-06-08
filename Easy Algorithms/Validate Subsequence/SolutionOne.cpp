using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
	int sequenceIndex = 0;
	int arrayIndex = 0;
	
	while(arrayIndex != array.size()) {
		if(array[arrayIndex] == sequence[sequenceIndex]) {
			 sequenceIndex++;
		}
		
		arrayIndex++;
	}
	
	if(sequenceIndex == sequence.size()) {
		return true;
	}
	
  return false;
}
