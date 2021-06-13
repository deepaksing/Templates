
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}


vector<ll> pr = sieve(100000);
 
int primefactor(ll n) {
 
    ll count = 0;
    for(auto x: pr) {
        if(x>n) break;
        while(n%x == 0) {
            n = n/x;
            count++;
        }
    }
 
    if(n>1) count++;
 
    return count;
 }

 
