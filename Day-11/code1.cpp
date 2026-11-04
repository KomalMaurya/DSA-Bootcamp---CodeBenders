#include <bits/stdc++.h>
using namespace std;

// function

// column[N] -> whenever it is 1 -> then it means that particular column index has a queen in it
// diagonal[N] -> whenever it is 1 -> then it means that diagonal contains a queen in it

// 1. Base case
// 2. Recursive case

int n = 4;

vector<int> column;
vector<int> diagonal1;
vector<int> diagonal2;

int countWays = 0;

void search(int row){ // 4
    // base case
    if(row == n){
        // I have reached one valid solution
        countWays++;
        return;
    }
    
    // Recursive case
    for(int col = 0; col < n; col++){ 
        int d1 = row + col;
        int d2 = row - col + n - 1;
        if(column[col] == 1 || diagonal1[d1] == 1 || diagonal2[d2] == 1){
            continue;
        }
        // choice of placing queen at (row, col)
        column[col] = 1;
        diagonal1[d1] = 1;
        diagonal2[d2] = 1;
        search(row+1); // call
        
        // undo choice
        column[col] = 0;
        diagonal1[d1] = 0;
        diagonal2[d2] = 0;
        
    }
}

int main() {
	// your code goes here
	column.assign(n, 0);
	diagonal1.assign(2 * n , 0);
	diagonal2.assign(2 * n, 0);
	search(0);
	cout << countWays;

}
