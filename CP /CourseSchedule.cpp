#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>

using namespace std;

 vector<int> findOrder(int numCourses,  vector<vector<int>>& prerequisites) {
   vector<vector<int>> graph(numCourses, vector<int>());
        queue<int> nodes;
        vector<int> indegrees(numCourses, 0);
        vector<int> result;
        
        for (auto item : prerequisites) {
            graph[item[1]].push_back(item[0]);
            ++ indegrees[item[0]];
        }
        
        for (int i = 0; i<numCourses; i++){
            if (indegrees[i]== 0){
                nodes.push(i);
            }
        }

        while (!nodes.empty())
        {
            int node = nodes.front();
            nodes.pop();
            result.push_back(node);

            for (auto item : graph[node]){
                indegrees[item]--;
                if(indegrees[item] == 0){
                    nodes.push(item);
                }    
            }

           
        }

    
    return result.size() == numCourses ? result : vector<int>();    
}

int main(){
    vector<vector<int>> prerequisites ({{1,0},{2,0},{3,1},{3,2}}); //[[1,0],[2,0],[3,1],[3,2]]
    vector<int> result =  findOrder(2,prerequisites);

    for (auto i : result){
        cout<<i << endl;
    }
    
    return 0;
}
