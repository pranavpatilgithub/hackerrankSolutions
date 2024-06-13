vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> c;
    int scoreA = 0, scoreB = 0;
    for(int i=0; i<a.size(); i++){
            if(a[i] > b[i]){
                scoreA++;
            }
            else if(a[i] < b[i]){
                scoreB++;
            }
            else{
                continue;
            }
    }
    c.insert(c.begin(), scoreB);
    c.insert(c.begin(), scoreA);  
    return c;
}
