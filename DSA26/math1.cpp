//no of primes less than n:


// to find prime
// bool isPrime(int n){
//     if(n<=1) return false;
//     for (int i = 2;i<n;i++){
//         if(n%i==0) return false;
//         return true;//else
//     }
// }

// Sieve of Eratosthenes
// 1. mark every as prime no
//2.table mai jo jo aa raha hai unhe no prime maan lo

// int cnt=0;
// vector <bool>prime(n+1,true);
// print[0] = prime[1] = false;
// for(int i=2;i<n;i++){
//     if(prime[i])
//         count++;
//     for (int j = 2 * i; j < n;j=j+i)
//         prime[j] = 0;
// }
// return cnt;