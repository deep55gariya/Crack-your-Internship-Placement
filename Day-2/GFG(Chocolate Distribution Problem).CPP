 public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(),a.end());
    
    int min=INT_MAX;

    
    for(int i=0;i<=n-m;i++){
        long long diff = a[i+m-1] - a[i];
        if(diff<min){
            min= diff;
        }
    
            
        
    }
    return min;
    
    }   