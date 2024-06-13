void miniMaxSum(vector<int> arr){
    vector<long int> result;
    for(int i=0; i<arr.size(); i++){
        long int sum=0;
        for(int j=0; j<arr.size(); j++){
            sum += arr[j];
        }
        sum = sum - arr[i];
        result.push_back(sum);
    }
    
    cout<< *min_element(result.begin() , result.end())<<" ";
    cout<< *max_element(result.begin() , result.end());

}
