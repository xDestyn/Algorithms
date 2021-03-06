#include <vector> 
#include <unordered_map> 
using namespace std;

const int HOME_TEAM_WON = 1;
void updateScores(string team, int points, unordered_map<string, int> &scores);

string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {
	
	string currentBestTeam = "";
	unordered_map<string, int> scores = {{ currentBestTeam, 0 }}; 
	
	for(int idx = 0; idx < competitions.size(); idx++) {
		auto result = results[idx];
		auto competition = competitions[idx];
		auto homeTeam = competition[0];
		auto awayTeam = competition[1];
		auto winningTeam = result == HOME_TEAM_WON ? homeTeam : awayTeam;
		
		updateScores(winningTeam, 3, scores);
		
		if(scores[winningTeam] > scores[currentBestTeam]) {
			currentBestTeam = winningTeam;
		}
	}
	
	return currentBestTeam;
}

void updateScores(string team, int points, unordered_map<string, int> & scores) {
	if(scores.find(team) == scores.end())
		scores[team] = 0;
	
	scores[team] += points;
}