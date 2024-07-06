#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> pi;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair <int, int>> vpi;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define ip(x) int x; cin >> x;
#define iip(x,y) int x, y; cin >> x >> y;
#define iiip(x,y,z) int x,y,z; cin >> x >> y >> z;
#define PI 3.14159265358979
#define MOD 1000000007
#define inf LONG_LONG_MAX

bool isFraction(double &a)
{
	if(a == static_cast<int>(a)) return true;
	else return false;
}
ll add(ll x, ll y) 
{
	x += y;
	if (x >= MOD) return x - MOD;
	return x;
}
ll sub(ll x, ll y) 
{
	x -= y;
	if (x < 0) return x + MOD;
	return x;
}
ll mul(ll x, ll y) 
{	
	return (x * y) % MOD;
}
void Fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct custom_hash 
{
    static uint64_t splitmix64(uint64_t x) 
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const 
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

// unordered_map<uint64_t, int, custom_hash> my_map;

void merge (vi &nums, int const p, int const q, int const r)
{
    int n1 = q-p+1;
    int n2 = r-q;

    vi L(n1); vi R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = nums[i+p];
    for (int i = 0; i < n2; i++)
        R[i] = nums[q+i+1];

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            nums[k] = L[i];
            i++;
        }
        else
        {
            nums[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        nums[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        nums[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort (vi &nums, int const p, int const r)
{
    if (p < r)
    {
        int q = (p+r) / 2;
        merge_sort(nums, p, q);
        merge_sort(nums, q+1, r);
        merge (nums, p, q, r);
    }
}

void dfs(int v, vvi& nums, vb& visited)
{
    visited[v] = true;
    cout << v << " ";
    
    for (int u : nums[v])
    {
        if (!visited[u])
        {
            dfs(u, nums, visited);
        }
    }
}

int a[200003], b[200004];

int main()
{
    Fast();
    int n, k, q, r, l, aa, bb;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    for (int i = 1; i < 200002; i++)
        a[i] += a[i-1];
    for (int i = 1; i < 200002; i++)
    {
        if (a[i] >= k)
        b[i] = 1;
        else 
        b[i] = 0;
    }
    for (int i = 1; i < 200002; i++)
        b[i] += b[i-1];
    while (q--)
    {
        cin >> aa >> bb;
        cout << b[bb] - b[aa-1] << endl;
    }
}