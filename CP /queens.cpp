#include<iostream>
#include<vector>


using namespace std;

int result = 0;

vector<int,int> direction ({{1,0},{0,1},{0,-1},{-1,0}});

int queensAttack(int n, int r, int c){
    int arr[n][n];
    for (auto item : direction){}
    return 0;

}


int main(){
    queensAttack(4,0,0);
    return 0;
}

// [4,4]
// left = [4,3][4,2],[4,1]
// right = 0
// up = [3,4],[2,4],[1,4]
// down = 0
// ld = [3,3][2,2][1,1]
