/*
Function Description

Complete the function birthdayCakeCandles in the editor below.

birthdayCakeCandles has the following parameter(s):

int candles[n]: the candle heights
Returns

int: the number of candles that are tallest
You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
*/

int birthdayCakeCandles(vector<int> candles) {
    int  maxi = candles[0];
    int count = 0; 
    for(int i=0; i < candles.size(); i++){
        maxi = max(candles[i], maxi);
    }
    for (int i=0; i< candles.size(); i++){
        if(candles[i]==maxi){
            count++;
        }
    }
    return count;
}


// one more method to solve this question is as follows 

int birthdayCakeCandles(vector<int> candles) {
    int maxi = candles[0];
    int count = 1; // Start with the first candle
    
    for (int i = 1; i < candles.size(); i++) {
        if (candles[i] > maxi) {
            maxi = candles[i];
            count = 1; // Reset count for the new maximum
        } else if (candles[i] == maxi) {
            count++; // Increment count if it matches the current maximum
        }
    }
    
    return count;
}
