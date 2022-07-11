class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int Length = cost.size();
        if(Length == 2){
            return min(cost.at(0),cost.at(1));
        }
        else{
            for(int idx = 2; idx<Length;idx++){ 
                cost[idx] += min(cost.at(idx-1),cost.at(idx-2));
            }
            return min(cost[Length-1],cost[Length-2]);
        }
    
    }
};

#經典動態規劃題目
/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.


*/
