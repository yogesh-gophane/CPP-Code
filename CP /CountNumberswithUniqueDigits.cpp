#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<fstream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
        map<int,int> ranks;
        int count= 1;
        vector<int> result;
        
        for (auto item : ranked){
            if (ranks.find(item)!=ranks.end()){
                continue;
            } else{
                ranks[item] = count;
                count++;
            }
        }
    
      for (int p=player.size()-1; p>=0; p--){
          int r=0;
          if (player[p]>= ranked[r]){
             result.push_back(ranks[ranked[r]]);
          } else{
              while(player[p]< ranked[r]){
                  r++;
              }
              if (r >= ranked.size()-1){
                  result.push_back(ranks[ranked[r-1]]+1);
                
                  continue;
              }
              
              result.push_back(ranks[ranked[r]]);
            // cout<<ranks[ranked[r]]<<endl;
          } 
      }
                   
      
        return result;
        
        
    
}

int main()

{   
    vector<int> ranked({100, 100, 50, 40, 40, 20, 10});
     vector<int> player({5, 25, 50, 120});
    vector<int> result=  climbingLeaderboard(ranked,player); 

    for (auto i : result){
        cout<<i<<endl;
    }
    return 0;
}
