void plusMinus(vector<int> arr) {
    int posRatio=0 , negRatio = 0 , zeroRatio = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            negRatio++;
        }
        else if(arr[i] == 0){
            zeroRatio++;
        }
        else{
            posRatio++;
        }
    }
    cout<< (float)posRatio/n<<endl;
    cout<< (float)negRatio/n<<endl;;
    cout<< (float)zeroRatio/n<<endl;
}
