const int maxn = 100000;
bool sieve[maxn];

for (int i=2; i<=maxn; ++i) sieve[i] = true;
for (int i=2; i*i<=maxn; i++)
{
    if (sieve[i]) {
    	for (int j=i*i; j<=num; j+=i){
            sieve[j] = false;
        }
    }

}