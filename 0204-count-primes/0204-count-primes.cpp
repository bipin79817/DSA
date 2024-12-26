class Solution {
public:
    
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        
        vector<bool> isprime(n, true);
        isprime[0]=isprime[1]=false;
        
        for(int i=2; i*i<n; i++){
            if(isprime[i]){
                for(int j=2*i; j<n; j=j+i){
                    isprime[j]=false;
                }
            }
            
        }
        
        int count=0;
        
        for(int i=2; i<n; i++){
            if(isprime[i]){
                count++;
            }
        }
        return count;
    }
};