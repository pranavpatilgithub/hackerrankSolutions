int birthdayCakeCandles(vector<int> candles) {
    int max = *max_element(candles.begin() , candles.end());
    int count = 0;
    for(int i=0; i<candles.size(); i++){
        if(candles[i] == max){
            count++;
        }
    }
    return count;
}
