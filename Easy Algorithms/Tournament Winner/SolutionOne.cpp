#include <vector>
using namespace std;

// O(n) time || O(k) space - where n is the number
// of competitions and k is the number of teams
string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
	
	// Map to hold team with their score
  unordered_map<string, int> resultMap;
	// Stores the name of teams 
	string homeTeam, awayTeam;
	// Stores the winning team's name
	string winTeam;
	// Stores the winning team's score
	int winScore = -1;
	
	for(int i = 0; i < competitions.size(); i++) {
		// Gets name of first team
		homeTeam = competitions[i][0];
		// Gets name of second team
		awayTeam = competitions[i][1];
		
		// Gets iterator upon map search
		auto it = resultMap.find(homeTeam);
		auto it2 = resultMap.find(awayTeam);
		
		// If empty, add team name to map with default score 0
		if(it == resultMap.end())
			resultMap.insert({homeTeam, 0});
		
		if(it2 == resultMap.end()) 
			resultMap.insert({awayTeam, 0});
		
		// Increment team's score depending on results[i]
		if(results[i] == 0) 
			resultMap[awayTeam]+=3;
		
		else if(results[i] == 1)
			resultMap[homeTeam]+=3;
	}  
	
	// Traversing the map
	for(auto it : resultMap) {
		// If team's score is higher than the current winning score, update winScore and winTeam name
		if(it.second > winScore) {
			winScore = it.second;
			winTeam = it.first;
		}
	}
	
	// Return winning team's name
	return winTeam;
}
